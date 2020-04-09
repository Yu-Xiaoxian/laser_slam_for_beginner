# Copyright [2020] [laser_slam_for_beginner Authors]

# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at

#     http://www.apache.org/licenses/LICENSE-2.0

# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

FROM ros:kinetic

RUN git clone https://github.com/Yu-Xiaoxian/laser_slam_for_beginner.git /sandbox

ADD entrypoint.sh /sandbox/entrypoint.sh
RUN chmod +x /sandbox/entrypoint.sh
ENTRYPOINT ["/sandbox/entrypoint.sh"]
