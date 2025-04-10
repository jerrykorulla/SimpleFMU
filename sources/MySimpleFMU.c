#include "fmi2Functions.h"
#include <stdio.h>

#define UNUSED(x) (void)(x)

// Mandatory functions
FMI2_Export const char* fmi2GetVersion() {
    return "2.0";
}

FMI2_Export const char* fmi2GetTypesPlatform() {
    return "default";
}

FMI2_Export fmi2Component fmi2Instantiate(fmi2String instanceName,
                                          fmi2Type fmuType,
                                          fmi2String fmuGUID,
                                          fmi2String fmuResourceLocation,
                                          const fmi2CallbackFunctions* functions,
                                          fmi2Boolean visible,
                                          fmi2Boolean loggingOn) {
    UNUSED(instanceName); UNUSED(fmuType); UNUSED(fmuGUID);
    UNUSED(fmuResourceLocation); UNUSED(functions); UNUSED(visible); UNUSED(loggingOn);
    return (fmi2Component)1;
}

FMI2_Export void fmi2FreeInstance(fmi2Component c) {
    UNUSED(c);
}

FMI2_Export fmi2Status fmi2SetupExperiment(fmi2Component c,
                                           fmi2Boolean toleranceDefined,
                                           fmi2Real tolerance,
                                           fmi2Real startTime,
                                           fmi2Boolean stopTimeDefined,
                                           fmi2Real stopTime) {
    UNUSED(c); UNUSED(toleranceDefined); UNUSED(tolerance); UNUSED(startTime);
    UNUSED(stopTimeDefined); UNUSED(stopTime);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2EnterInitializationMode(fmi2Component c) {
    UNUSED(c);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2ExitInitializationMode(fmi2Component c) {
    UNUSED(c);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2Terminate(fmi2Component c) {
    UNUSED(c);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2Reset(fmi2Component c) {
    UNUSED(c);
    return fmi2OK;
}

// Variable access
FMI2_Export fmi2Status fmi2GetReal(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2Real value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2SetReal(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2Real value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2GetInteger(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2Integer value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2SetInteger(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2Integer value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2GetBoolean(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2Boolean value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2SetBoolean(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2Boolean value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2GetString(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2String value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2SetString(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2String value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(value);
    return fmi2OK;
}

// Logging
FMI2_Export fmi2Status fmi2SetDebugLogging(fmi2Component c, fmi2Boolean loggingOn, size_t nCategories, const fmi2String categories[]) {
    UNUSED(c); UNUSED(loggingOn); UNUSED(nCategories); UNUSED(categories);
    return fmi2OK;
}

// Co-Simulation step
FMI2_Export fmi2Status fmi2DoStep(fmi2Component c, fmi2Real currentCommunicationPoint, fmi2Real communicationStepSize, fmi2Boolean noSetFMUStatePriorToCurrentPoint) {
    UNUSED(c); UNUSED(currentCommunicationPoint); UNUSED(communicationStepSize); UNUSED(noSetFMUStatePriorToCurrentPoint);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2CancelStep(fmi2Component c) {
    UNUSED(c);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2GetStatus(fmi2Component c, const fmi2StatusKind s, fmi2Status* value) {
    UNUSED(c); UNUSED(s); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2GetRealStatus(fmi2Component c, const fmi2StatusKind s, fmi2Real* value) {
    UNUSED(c); UNUSED(s); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2GetIntegerStatus(fmi2Component c, const fmi2StatusKind s, fmi2Integer* value) {
    UNUSED(c); UNUSED(s); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2GetBooleanStatus(fmi2Component c, const fmi2StatusKind s, fmi2Boolean* value) {
    UNUSED(c); UNUSED(s); UNUSED(value);
    return fmi2OK;
}

FMI2_Export fmi2Status fmi2GetStringStatus(fmi2Component c, const fmi2StatusKind s, fmi2String* value) {
    UNUSED(c); UNUSED(s); UNUSED(value);
    return fmi2OK;
}

// Serialization & directional derivatives
FMI2_Export fmi2Status fmi2GetFMUstate(fmi2Component c, fmi2FMUstate* state) {
    UNUSED(c); UNUSED(state);
    return fmi2Error;
}

FMI2_Export fmi2Status fmi2SetFMUstate(fmi2Component c, fmi2FMUstate state) {
    UNUSED(c); UNUSED(state);
    return fmi2Error;
}

FMI2_Export fmi2Status fmi2FreeFMUstate(fmi2Component c, fmi2FMUstate* state) {
    UNUSED(c); UNUSED(state);
    return fmi2Error;
}

FMI2_Export fmi2Status fmi2SerializedFMUstateSize(fmi2Component c, fmi2FMUstate state, size_t* size) {
    UNUSED(c); UNUSED(state); UNUSED(size);
    return fmi2Error;
}

FMI2_Export fmi2Status fmi2SerializeFMUstate(fmi2Component c, fmi2FMUstate state, fmi2Byte serializedState[], size_t size) {
    UNUSED(c); UNUSED(state); UNUSED(serializedState); UNUSED(size);
    return fmi2Error;
}

FMI2_Export fmi2Status fmi2DeSerializeFMUstate(fmi2Component c, const fmi2Byte serializedState[], size_t size, fmi2FMUstate* state) {
    UNUSED(c); UNUSED(serializedState); UNUSED(size); UNUSED(state);
    return fmi2Error;
}

FMI2_Export fmi2Status fmi2GetDirectionalDerivative(fmi2Component c,
                                                    const fmi2ValueReference vUnknown_ref[],
                                                    size_t nUnknown,
                                                    const fmi2ValueReference vKnown_ref[],
                                                    size_t nKnown,
                                                    const fmi2Real dvKnown[],
                                                    fmi2Real dvUnknown[]) {
    UNUSED(c); UNUSED(vUnknown_ref); UNUSED(nUnknown);
    UNUSED(vKnown_ref); UNUSED(nKnown); UNUSED(dvKnown); UNUSED(dvUnknown);
    return fmi2Error;
}

FMI2_Export fmi2Status fmi2SetRealInputDerivatives(fmi2Component c,
                                                   const fmi2ValueReference vr[], size_t nvr,
                                                   const fmi2Integer order[], const fmi2Real value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(order); UNUSED(value);
    return fmi2Error;
}

FMI2_Export fmi2Status fmi2GetRealOutputDerivatives(fmi2Component c,
                                                    const fmi2ValueReference vr[], size_t nvr,
                                                    const fmi2Integer order[], fmi2Real value[]) {
    UNUSED(c); UNUSED(vr); UNUSED(nvr); UNUSED(order); UNUSED(value);
    return fmi2Error;
}
