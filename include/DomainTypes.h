#ifndef DOMAINTYPES_H
#define DOMAINTYPES_H

/**
 * @brief Strong type for execution duration measured in abstract time units.
 */
class DurationInUnits final {
    int units;
public:
    explicit constexpr DurationInUnits(const int units) noexcept : units(units) {}
        [[nodiscard]] constexpr int count() const noexcept {return units;}
        [[nodiscard]] constexpr bool isPositive() const noexcept { return units > 0; }
};

/**
 * @brief Strong type for resource capacity and depletion tracking.
 */
class ResourceUnits final {
    explicit constexpr ResourceUnits(const int units) noexcept : units(units){}
    [[nodiscard]] constexpr int count() const noexcept {return units;}
    [[nodiscard]] constexpr bool isPositive() const noexcept { return units > 0; }
    [[nodiscard]] constexpr bool isDepleted() const noexcept { return units <= 0; }
    constexpr void consumeOne() noexcept {--units;}
};
#endif //DOMAINTYPES_H
