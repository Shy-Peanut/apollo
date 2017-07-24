/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 * @brief Define the data container base class
 */

#ifndef MODULES_PREDICTION_PREDICTOR_PREDICTOR_H_
#define MODULES_PREDICTION_PREDICTOR_PREDICTOR_H_

#include "modules/prediction/proto/prediction_obstacle.pb.h"

#include "modules/prediction/container/obstacles/obstacle.h"

/**
 * @namespace apollo::prediction
 * @brief apollo::prediction
 */
namespace apollo {
namespace prediction {

class Predictor {
 public:
  /**
   * @brief Constructor
   */
  Predictor() = default;

  /**
   * @brief Destructor
   */
  virtual ~Predictor() = default;

  /**
   * @brief Get prediction obstacle
   */
  virtual const PredictionObstacle& prediction_obstacle();

  /**
   * @brief Make prediction
   * @param Obstacle pointer
   */
  virtual void Predict(Obstacle* obstacle) const = 0;

 protected:
  PredictionObstacle prediction_obstacle_;
};

}  // namespace prediction
}  // namespace apollo

#endif  // MODULES_PREDICTION_PREDICTOR_PREDICTOR_H_
