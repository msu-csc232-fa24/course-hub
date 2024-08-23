/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2024
 *
 * @file    Bag.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Bag interface specification.
 * @version 1.0.0
 * @date    08/23/2024
 *
 * @copyright Copyright (c) 2024 James R. Daehn
 */

#ifndef COURSE_HUB_BAG_H
#define COURSE_HUB_BAG_H

/**
 * Namespace to encapsulate course work.
 */
namespace csc232 {
    /**
     * Base abstract class for box hierarchy.
     * @tparam ItemType the type of item in a box
     */
    template <typename ItemType>
    class BoxInterface {
    public:
        /**
         * Modify the item in this box.
         * @param theItem an item to put in this box
         */
        virtual void setItem(const ItemType& theItem) = 0;

        /**
         * Obtain a copy of the item contained in this box.
         * @return a copy of the item contained in this box.
         */
        virtual ItemType getItem() const = 0;

        /**
         * Default virtual box destructor.
         */
        virtual ~BoxInterface() = default;
    };
}

#endif //COURSE_HUB_BAG_H
