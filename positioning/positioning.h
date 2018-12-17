// +build !minimal

#pragma once

#ifndef GO_QTPOSITIONING_H
#define GO_QTPOSITIONING_H

#include <stdint.h>

#ifdef __cplusplus
int QGeoAreaMonitorSource_QGeoAreaMonitorSource_QRegisterMetaType();
int QGeoPositionInfoSource_QGeoPositionInfoSource_QRegisterMetaType();
int QGeoSatelliteInfoSource_QGeoSatelliteInfoSource_QRegisterMetaType();
int QNmeaPositionInfoSource_QNmeaPositionInfoSource_QRegisterMetaType();
extern "C" {
#endif

struct QtPositioning_PackedString { char* data; long long len; };
struct QtPositioning_PackedList { void* data; long long len; };
void* QGeoAddress_NewQGeoAddress();
void* QGeoAddress_NewQGeoAddress2(void* other);
void QGeoAddress_Clear(void* ptr);
void QGeoAddress_SetCity(void* ptr, struct QtPositioning_PackedString city);
void QGeoAddress_SetCountry(void* ptr, struct QtPositioning_PackedString country);
void QGeoAddress_SetCountryCode(void* ptr, struct QtPositioning_PackedString countryCode);
void QGeoAddress_SetCounty(void* ptr, struct QtPositioning_PackedString county);
void QGeoAddress_SetDistrict(void* ptr, struct QtPositioning_PackedString district);
void QGeoAddress_SetPostalCode(void* ptr, struct QtPositioning_PackedString postalCode);
void QGeoAddress_SetState(void* ptr, struct QtPositioning_PackedString state);
void QGeoAddress_SetStreet(void* ptr, struct QtPositioning_PackedString street);
void QGeoAddress_SetText(void* ptr, struct QtPositioning_PackedString text);
void QGeoAddress_DestroyQGeoAddress(void* ptr);
struct QtPositioning_PackedString QGeoAddress_City(void* ptr);
struct QtPositioning_PackedString QGeoAddress_Country(void* ptr);
struct QtPositioning_PackedString QGeoAddress_CountryCode(void* ptr);
struct QtPositioning_PackedString QGeoAddress_County(void* ptr);
struct QtPositioning_PackedString QGeoAddress_District(void* ptr);
struct QtPositioning_PackedString QGeoAddress_PostalCode(void* ptr);
struct QtPositioning_PackedString QGeoAddress_State(void* ptr);
struct QtPositioning_PackedString QGeoAddress_Street(void* ptr);
struct QtPositioning_PackedString QGeoAddress_Text(void* ptr);
char QGeoAddress_IsEmpty(void* ptr);
char QGeoAddress_IsTextGenerated(void* ptr);
void* QGeoAreaMonitorInfo_NewQGeoAreaMonitorInfo2(void* other);
void* QGeoAreaMonitorInfo_NewQGeoAreaMonitorInfo(struct QtPositioning_PackedString name);
void QGeoAreaMonitorInfo_SetArea(void* ptr, void* newShape);
void QGeoAreaMonitorInfo_SetExpiration(void* ptr, void* expiry);
void QGeoAreaMonitorInfo_SetName(void* ptr, struct QtPositioning_PackedString name);
void QGeoAreaMonitorInfo_SetNotificationParameters(void* ptr, void* parameters);
void QGeoAreaMonitorInfo_SetPersistent(void* ptr, char isPersistent);
void QGeoAreaMonitorInfo_DestroyQGeoAreaMonitorInfo(void* ptr);
void* QGeoAreaMonitorInfo_Expiration(void* ptr);
void* QGeoAreaMonitorInfo_Area(void* ptr);
struct QtPositioning_PackedString QGeoAreaMonitorInfo_Identifier(void* ptr);
struct QtPositioning_PackedString QGeoAreaMonitorInfo_Name(void* ptr);
struct QtPositioning_PackedList QGeoAreaMonitorInfo_NotificationParameters(void* ptr);
char QGeoAreaMonitorInfo_IsPersistent(void* ptr);
char QGeoAreaMonitorInfo_IsValid(void* ptr);
void* QGeoAreaMonitorInfo___setNotificationParameters_parameters_atList(void* ptr, struct QtPositioning_PackedString v, int i);
void QGeoAreaMonitorInfo___setNotificationParameters_parameters_setList(void* ptr, struct QtPositioning_PackedString key, void* i);
void* QGeoAreaMonitorInfo___setNotificationParameters_parameters_newList(void* ptr);
struct QtPositioning_PackedList QGeoAreaMonitorInfo___setNotificationParameters_parameters_keyList(void* ptr);
void* QGeoAreaMonitorInfo___notificationParameters_atList(void* ptr, struct QtPositioning_PackedString v, int i);
void QGeoAreaMonitorInfo___notificationParameters_setList(void* ptr, struct QtPositioning_PackedString key, void* i);
void* QGeoAreaMonitorInfo___notificationParameters_newList(void* ptr);
struct QtPositioning_PackedList QGeoAreaMonitorInfo___notificationParameters_keyList(void* ptr);
struct QtPositioning_PackedString QGeoAreaMonitorInfo_____setNotificationParameters_parameters_keyList_atList(void* ptr, int i);
void QGeoAreaMonitorInfo_____setNotificationParameters_parameters_keyList_setList(void* ptr, struct QtPositioning_PackedString i);
void* QGeoAreaMonitorInfo_____setNotificationParameters_parameters_keyList_newList(void* ptr);
struct QtPositioning_PackedString QGeoAreaMonitorInfo_____notificationParameters_keyList_atList(void* ptr, int i);
void QGeoAreaMonitorInfo_____notificationParameters_keyList_setList(void* ptr, struct QtPositioning_PackedString i);
void* QGeoAreaMonitorInfo_____notificationParameters_keyList_newList(void* ptr);
void* QGeoAreaMonitorSource_QGeoAreaMonitorSource_CreateDefaultSource(void* parent);
void* QGeoAreaMonitorSource_QGeoAreaMonitorSource_CreateSource(struct QtPositioning_PackedString sourceName, void* parent);
void* QGeoAreaMonitorSource_NewQGeoAreaMonitorSource(void* parent);
struct QtPositioning_PackedString QGeoAreaMonitorSource_QGeoAreaMonitorSource_Tr(char* s, char* c, int n);
struct QtPositioning_PackedString QGeoAreaMonitorSource_QGeoAreaMonitorSource_TrUtf8(char* s, char* c, int n);
struct QtPositioning_PackedString QGeoAreaMonitorSource_QGeoAreaMonitorSource_AvailableSources();
char QGeoAreaMonitorSource_RequestUpdate(void* ptr, void* monitor, char* sign);
char QGeoAreaMonitorSource_StartMonitoring(void* ptr, void* monitor);
char QGeoAreaMonitorSource_StopMonitoring(void* ptr, void* monitor);
void QGeoAreaMonitorSource_ConnectAreaEntered(void* ptr);
void QGeoAreaMonitorSource_DisconnectAreaEntered(void* ptr);
void QGeoAreaMonitorSource_AreaEntered(void* ptr, void* monitor, void* update);
void QGeoAreaMonitorSource_ConnectAreaExited(void* ptr);
void QGeoAreaMonitorSource_DisconnectAreaExited(void* ptr);
void QGeoAreaMonitorSource_AreaExited(void* ptr, void* monitor, void* update);
void QGeoAreaMonitorSource_ConnectError2(void* ptr);
void QGeoAreaMonitorSource_DisconnectError2(void* ptr);
void QGeoAreaMonitorSource_Error2(void* ptr, long long areaMonitoringError);
void QGeoAreaMonitorSource_ConnectMonitorExpired(void* ptr);
void QGeoAreaMonitorSource_DisconnectMonitorExpired(void* ptr);
void QGeoAreaMonitorSource_MonitorExpired(void* ptr, void* monitor);
void QGeoAreaMonitorSource_SetPositionInfoSource(void* ptr, void* newSource);
void QGeoAreaMonitorSource_SetPositionInfoSourceDefault(void* ptr, void* newSource);
void QGeoAreaMonitorSource_DestroyQGeoAreaMonitorSource(void* ptr);
void QGeoAreaMonitorSource_DestroyQGeoAreaMonitorSourceDefault(void* ptr);
long long QGeoAreaMonitorSource_SupportedAreaMonitorFeatures(void* ptr);
long long QGeoAreaMonitorSource_Error(void* ptr);
void* QGeoAreaMonitorSource_PositionInfoSource(void* ptr);
void* QGeoAreaMonitorSource_PositionInfoSourceDefault(void* ptr);
struct QtPositioning_PackedList QGeoAreaMonitorSource_ActiveMonitors(void* ptr);
struct QtPositioning_PackedList QGeoAreaMonitorSource_ActiveMonitors2(void* ptr, void* lookupArea);
struct QtPositioning_PackedString QGeoAreaMonitorSource_SourceName(void* ptr);
void* QGeoAreaMonitorSource_MetaObjectDefault(void* ptr);
void* QGeoAreaMonitorSource___activeMonitors_atList(void* ptr, int i);
void QGeoAreaMonitorSource___activeMonitors_setList(void* ptr, void* i);
void* QGeoAreaMonitorSource___activeMonitors_newList(void* ptr);
void* QGeoAreaMonitorSource___activeMonitors_atList2(void* ptr, int i);
void QGeoAreaMonitorSource___activeMonitors_setList2(void* ptr, void* i);
void* QGeoAreaMonitorSource___activeMonitors_newList2(void* ptr);
void* QGeoAreaMonitorSource___dynamicPropertyNames_atList(void* ptr, int i);
void QGeoAreaMonitorSource___dynamicPropertyNames_setList(void* ptr, void* i);
void* QGeoAreaMonitorSource___dynamicPropertyNames_newList(void* ptr);
void* QGeoAreaMonitorSource___findChildren_atList2(void* ptr, int i);
void QGeoAreaMonitorSource___findChildren_setList2(void* ptr, void* i);
void* QGeoAreaMonitorSource___findChildren_newList2(void* ptr);
void* QGeoAreaMonitorSource___findChildren_atList3(void* ptr, int i);
void QGeoAreaMonitorSource___findChildren_setList3(void* ptr, void* i);
void* QGeoAreaMonitorSource___findChildren_newList3(void* ptr);
void* QGeoAreaMonitorSource___findChildren_atList(void* ptr, int i);
void QGeoAreaMonitorSource___findChildren_setList(void* ptr, void* i);
void* QGeoAreaMonitorSource___findChildren_newList(void* ptr);
void* QGeoAreaMonitorSource___children_atList(void* ptr, int i);
void QGeoAreaMonitorSource___children_setList(void* ptr, void* i);
void* QGeoAreaMonitorSource___children_newList(void* ptr);
char QGeoAreaMonitorSource_EventDefault(void* ptr, void* e);
char QGeoAreaMonitorSource_EventFilterDefault(void* ptr, void* watched, void* event);
void QGeoAreaMonitorSource_ChildEventDefault(void* ptr, void* event);
void QGeoAreaMonitorSource_ConnectNotifyDefault(void* ptr, void* sign);
void QGeoAreaMonitorSource_CustomEventDefault(void* ptr, void* event);
void QGeoAreaMonitorSource_DeleteLaterDefault(void* ptr);
void QGeoAreaMonitorSource_DisconnectNotifyDefault(void* ptr, void* sign);
void QGeoAreaMonitorSource_TimerEventDefault(void* ptr, void* event);
void* QGeoCircle_NewQGeoCircle();
void* QGeoCircle_NewQGeoCircle3(void* other);
void* QGeoCircle_NewQGeoCircle2(void* center, double radius);
void* QGeoCircle_NewQGeoCircle4(void* other);
void QGeoCircle_ExtendCircle(void* ptr, void* coordinate);
void QGeoCircle_SetCenter(void* ptr, void* center);
void QGeoCircle_SetRadius(void* ptr, double radius);
void QGeoCircle_Translate(void* ptr, double degreesLatitude, double degreesLongitude);
void QGeoCircle_DestroyQGeoCircle(void* ptr);
void* QGeoCircle_Translated(void* ptr, double degreesLatitude, double degreesLongitude);
double QGeoCircle_Radius(void* ptr);
void* QGeoCoordinate_NewQGeoCoordinate();
void* QGeoCoordinate_NewQGeoCoordinate4(void* other);
void* QGeoCoordinate_NewQGeoCoordinate2(double latitude, double longitude);
void* QGeoCoordinate_NewQGeoCoordinate3(double latitude, double longitude, double altitude);
void QGeoCoordinate_SetAltitude(void* ptr, double altitude);
void QGeoCoordinate_SetLatitude(void* ptr, double latitude);
void QGeoCoordinate_SetLongitude(void* ptr, double longitude);
void QGeoCoordinate_DestroyQGeoCoordinate(void* ptr);
void* QGeoCoordinate_AtDistanceAndAzimuth(void* ptr, double distance, double azimuth, double distanceUp);
long long QGeoCoordinate_Type(void* ptr);
struct QtPositioning_PackedString QGeoCoordinate_ToString(void* ptr, long long format);
char QGeoCoordinate_IsValid(void* ptr);
double QGeoCoordinate_Altitude(void* ptr);
double QGeoCoordinate_Latitude(void* ptr);
double QGeoCoordinate_Longitude(void* ptr);
double QGeoCoordinate_AzimuthTo(void* ptr, void* other);
double QGeoCoordinate_DistanceTo(void* ptr, void* other);
void* QGeoPath_NewQGeoPath();
void* QGeoPath_NewQGeoPath3(void* other);
void* QGeoPath_NewQGeoPath4(void* other);
void* QGeoPath_NewQGeoPath2(void* path, double width);
void QGeoPath_AddCoordinate(void* ptr, void* coordinate);
void QGeoPath_ClearPath(void* ptr);
void QGeoPath_InsertCoordinate(void* ptr, int index, void* coordinate);
void QGeoPath_RemoveCoordinate(void* ptr, void* coordinate);
void QGeoPath_RemoveCoordinate2(void* ptr, int index);
void QGeoPath_ReplaceCoordinate(void* ptr, int index, void* coordinate);
void QGeoPath_SetPath(void* ptr, void* path);
void QGeoPath_SetWidth(void* ptr, double width);
void QGeoPath_Translate(void* ptr, double degreesLatitude, double degreesLongitude);
void QGeoPath_DestroyQGeoPath(void* ptr);
void* QGeoPath_CoordinateAt(void* ptr, int index);
void* QGeoPath_Translated(void* ptr, double degreesLatitude, double degreesLongitude);
char QGeoPath_ContainsCoordinate(void* ptr, void* coordinate);
struct QtPositioning_PackedList QGeoPath_Path(void* ptr);
double QGeoPath_Length(void* ptr, int indexFrom, int indexTo);
int QGeoPath_Size(void* ptr);
double QGeoPath_Width(void* ptr);
void* QGeoPath___QGeoPath_path_atList2(void* ptr, int i);
void QGeoPath___QGeoPath_path_setList2(void* ptr, void* i);
void* QGeoPath___QGeoPath_path_newList2(void* ptr);
void* QGeoPath___setPath_path_atList(void* ptr, int i);
void QGeoPath___setPath_path_setList(void* ptr, void* i);
void* QGeoPath___setPath_path_newList(void* ptr);
void* QGeoPath___setVariantPath_path_atList(void* ptr, int i);
void QGeoPath___setVariantPath_path_setList(void* ptr, void* i);
void* QGeoPath___setVariantPath_path_newList(void* ptr);
void* QGeoPath___variantPath_atList(void* ptr, int i);
void QGeoPath___variantPath_setList(void* ptr, void* i);
void* QGeoPath___variantPath_newList(void* ptr);
void* QGeoPath___path_atList(void* ptr, int i);
void QGeoPath___path_setList(void* ptr, void* i);
void* QGeoPath___path_newList(void* ptr);
void* QGeoPolygon_NewQGeoPolygon();
void* QGeoPolygon_NewQGeoPolygon3(void* other);
void* QGeoPolygon_NewQGeoPolygon4(void* other);
void* QGeoPolygon_NewQGeoPolygon2(void* path);
void QGeoPolygon_AddCoordinate(void* ptr, void* coordinate);
void QGeoPolygon_AddHole2(void* ptr, void* holePath);
void QGeoPolygon_AddHole(void* ptr, void* holePath);
void QGeoPolygon_InsertCoordinate(void* ptr, int index, void* coordinate);
void QGeoPolygon_RemoveCoordinate(void* ptr, void* coordinate);
void QGeoPolygon_RemoveCoordinate2(void* ptr, int index);
void QGeoPolygon_RemoveHole(void* ptr, int index);
void QGeoPolygon_ReplaceCoordinate(void* ptr, int index, void* coordinate);
void QGeoPolygon_SetPath(void* ptr, void* path);
void QGeoPolygon_SetPerimeter(void* ptr, void* path);
void QGeoPolygon_Translate(void* ptr, double degreesLatitude, double degreesLongitude);
void QGeoPolygon_DestroyQGeoPolygon(void* ptr);
void* QGeoPolygon_CoordinateAt(void* ptr, int index);
void* QGeoPolygon_Translated(void* ptr, double degreesLatitude, double degreesLongitude);
struct QtPositioning_PackedList QGeoPolygon_Perimeter(void* ptr);
char QGeoPolygon_ContainsCoordinate(void* ptr, void* coordinate);
struct QtPositioning_PackedList QGeoPolygon_Path(void* ptr);
struct QtPositioning_PackedList QGeoPolygon_HolePath(void* ptr, int index);
struct QtPositioning_PackedList QGeoPolygon_Hole(void* ptr, int index);
double QGeoPolygon_Length(void* ptr, int indexFrom, int indexTo);
int QGeoPolygon_HolesCount(void* ptr);
int QGeoPolygon_Size(void* ptr);
void* QGeoPolygon___QGeoPolygon_path_atList2(void* ptr, int i);
void QGeoPolygon___QGeoPolygon_path_setList2(void* ptr, void* i);
void* QGeoPolygon___QGeoPolygon_path_newList2(void* ptr);
void* QGeoPolygon___addHole_holePath_atList2(void* ptr, int i);
void QGeoPolygon___addHole_holePath_setList2(void* ptr, void* i);
void* QGeoPolygon___addHole_holePath_newList2(void* ptr);
void* QGeoPolygon___setPath_path_atList(void* ptr, int i);
void QGeoPolygon___setPath_path_setList(void* ptr, void* i);
void* QGeoPolygon___setPath_path_newList(void* ptr);
void* QGeoPolygon___setPerimeter_path_atList(void* ptr, int i);
void QGeoPolygon___setPerimeter_path_setList(void* ptr, void* i);
void* QGeoPolygon___setPerimeter_path_newList(void* ptr);
void* QGeoPolygon___perimeter_atList(void* ptr, int i);
void QGeoPolygon___perimeter_setList(void* ptr, void* i);
void* QGeoPolygon___perimeter_newList(void* ptr);
void* QGeoPolygon___path_atList(void* ptr, int i);
void QGeoPolygon___path_setList(void* ptr, void* i);
void* QGeoPolygon___path_newList(void* ptr);
void* QGeoPolygon___holePath_atList(void* ptr, int i);
void QGeoPolygon___holePath_setList(void* ptr, void* i);
void* QGeoPolygon___holePath_newList(void* ptr);
void* QGeoPolygon___hole_atList(void* ptr, int i);
void QGeoPolygon___hole_setList(void* ptr, void* i);
void* QGeoPolygon___hole_newList(void* ptr);
void* QGeoPositionInfo_NewQGeoPositionInfo();
void* QGeoPositionInfo_NewQGeoPositionInfo2(void* coordinate, void* timestamp);
void* QGeoPositionInfo_NewQGeoPositionInfo3(void* other);
void QGeoPositionInfo_RemoveAttribute(void* ptr, long long attribute);
void QGeoPositionInfo_SetAttribute(void* ptr, long long attribute, double value);
void QGeoPositionInfo_SetCoordinate(void* ptr, void* coordinate);
void QGeoPositionInfo_SetTimestamp(void* ptr, void* timestamp);
void QGeoPositionInfo_DestroyQGeoPositionInfo(void* ptr);
void* QGeoPositionInfo_Timestamp(void* ptr);
void* QGeoPositionInfo_Coordinate(void* ptr);
char QGeoPositionInfo_HasAttribute(void* ptr, long long attribute);
char QGeoPositionInfo_IsValid(void* ptr);
double QGeoPositionInfo_Attribute(void* ptr, long long attribute);
void* QGeoPositionInfoSource_QGeoPositionInfoSource_CreateDefaultSource(void* parent);
void* QGeoPositionInfoSource_QGeoPositionInfoSource_CreateSource(struct QtPositioning_PackedString sourceName, void* parent);
void* QGeoPositionInfoSource_NewQGeoPositionInfoSource(void* parent);
struct QtPositioning_PackedString QGeoPositionInfoSource_QGeoPositionInfoSource_Tr(char* s, char* c, int n);
struct QtPositioning_PackedString QGeoPositionInfoSource_QGeoPositionInfoSource_TrUtf8(char* s, char* c, int n);
struct QtPositioning_PackedString QGeoPositionInfoSource_QGeoPositionInfoSource_AvailableSources();
void QGeoPositionInfoSource_ConnectError2(void* ptr);
void QGeoPositionInfoSource_DisconnectError2(void* ptr);
void QGeoPositionInfoSource_Error2(void* ptr, long long positioningError);
void QGeoPositionInfoSource_ConnectPositionUpdated(void* ptr);
void QGeoPositionInfoSource_DisconnectPositionUpdated(void* ptr);
void QGeoPositionInfoSource_PositionUpdated(void* ptr, void* update);
void QGeoPositionInfoSource_RequestUpdate(void* ptr, int timeout);
void QGeoPositionInfoSource_SetPreferredPositioningMethods(void* ptr, long long methods);
void QGeoPositionInfoSource_SetPreferredPositioningMethodsDefault(void* ptr, long long methods);
void QGeoPositionInfoSource_SetUpdateInterval(void* ptr, int msec);
void QGeoPositionInfoSource_SetUpdateIntervalDefault(void* ptr, int msec);
void QGeoPositionInfoSource_StartUpdates(void* ptr);
void QGeoPositionInfoSource_StopUpdates(void* ptr);
void QGeoPositionInfoSource_ConnectSupportedPositioningMethodsChanged(void* ptr);
void QGeoPositionInfoSource_DisconnectSupportedPositioningMethodsChanged(void* ptr);
void QGeoPositionInfoSource_SupportedPositioningMethodsChanged(void* ptr);
void QGeoPositionInfoSource_ConnectUpdateTimeout(void* ptr);
void QGeoPositionInfoSource_DisconnectUpdateTimeout(void* ptr);
void QGeoPositionInfoSource_UpdateTimeout(void* ptr);
void QGeoPositionInfoSource_DestroyQGeoPositionInfoSource(void* ptr);
void QGeoPositionInfoSource_DestroyQGeoPositionInfoSourceDefault(void* ptr);
void* QGeoPositionInfoSource_LastKnownPosition(void* ptr, char fromSatellitePositioningMethodsOnly);
long long QGeoPositionInfoSource_Error(void* ptr);
long long QGeoPositionInfoSource_PreferredPositioningMethods(void* ptr);
long long QGeoPositionInfoSource_SupportedPositioningMethods(void* ptr);
struct QtPositioning_PackedString QGeoPositionInfoSource_SourceName(void* ptr);
void* QGeoPositionInfoSource_MetaObjectDefault(void* ptr);
int QGeoPositionInfoSource_MinimumUpdateInterval(void* ptr);
int QGeoPositionInfoSource_UpdateInterval(void* ptr);
void* QGeoPositionInfoSource___dynamicPropertyNames_atList(void* ptr, int i);
void QGeoPositionInfoSource___dynamicPropertyNames_setList(void* ptr, void* i);
void* QGeoPositionInfoSource___dynamicPropertyNames_newList(void* ptr);
void* QGeoPositionInfoSource___findChildren_atList2(void* ptr, int i);
void QGeoPositionInfoSource___findChildren_setList2(void* ptr, void* i);
void* QGeoPositionInfoSource___findChildren_newList2(void* ptr);
void* QGeoPositionInfoSource___findChildren_atList3(void* ptr, int i);
void QGeoPositionInfoSource___findChildren_setList3(void* ptr, void* i);
void* QGeoPositionInfoSource___findChildren_newList3(void* ptr);
void* QGeoPositionInfoSource___findChildren_atList(void* ptr, int i);
void QGeoPositionInfoSource___findChildren_setList(void* ptr, void* i);
void* QGeoPositionInfoSource___findChildren_newList(void* ptr);
void* QGeoPositionInfoSource___children_atList(void* ptr, int i);
void QGeoPositionInfoSource___children_setList(void* ptr, void* i);
void* QGeoPositionInfoSource___children_newList(void* ptr);
char QGeoPositionInfoSource_EventDefault(void* ptr, void* e);
char QGeoPositionInfoSource_EventFilterDefault(void* ptr, void* watched, void* event);
void QGeoPositionInfoSource_ChildEventDefault(void* ptr, void* event);
void QGeoPositionInfoSource_ConnectNotifyDefault(void* ptr, void* sign);
void QGeoPositionInfoSource_CustomEventDefault(void* ptr, void* event);
void QGeoPositionInfoSource_DeleteLaterDefault(void* ptr);
void QGeoPositionInfoSource_DisconnectNotifyDefault(void* ptr, void* sign);
void QGeoPositionInfoSource_TimerEventDefault(void* ptr, void* event);
void* QGeoPositionInfoSourceFactory_AreaMonitor(void* ptr, void* parent);
void* QGeoPositionInfoSourceFactory_PositionInfoSource(void* ptr, void* parent);
void* QGeoPositionInfoSourceFactory_SatelliteInfoSource(void* ptr, void* parent);
void QGeoPositionInfoSourceFactory_DestroyQGeoPositionInfoSourceFactory(void* ptr);
void QGeoPositionInfoSourceFactory_DestroyQGeoPositionInfoSourceFactoryDefault(void* ptr);
void* QGeoRectangle_NewQGeoRectangle();
void* QGeoRectangle_NewQGeoRectangle2(void* center, double degreesWidth, double degreesHeight);
void* QGeoRectangle_NewQGeoRectangle3(void* topLeft, void* bottomRight);
void* QGeoRectangle_NewQGeoRectangle5(void* other);
void* QGeoRectangle_NewQGeoRectangle6(void* other);
void* QGeoRectangle_NewQGeoRectangle4(void* coordinates);
void QGeoRectangle_ExtendRectangle(void* ptr, void* coordinate);
void QGeoRectangle_SetBottomLeft(void* ptr, void* bottomLeft);
void QGeoRectangle_SetBottomRight(void* ptr, void* bottomRight);
void QGeoRectangle_SetCenter(void* ptr, void* center);
void QGeoRectangle_SetHeight(void* ptr, double degreesHeight);
void QGeoRectangle_SetTopLeft(void* ptr, void* topLeft);
void QGeoRectangle_SetTopRight(void* ptr, void* topRight);
void QGeoRectangle_SetWidth(void* ptr, double degreesWidth);
void QGeoRectangle_Translate(void* ptr, double degreesLatitude, double degreesLongitude);
void QGeoRectangle_DestroyQGeoRectangle(void* ptr);
void* QGeoRectangle_BottomLeft(void* ptr);
void* QGeoRectangle_BottomRight(void* ptr);
void* QGeoRectangle_TopLeft(void* ptr);
void* QGeoRectangle_TopRight(void* ptr);
void* QGeoRectangle_Translated(void* ptr, double degreesLatitude, double degreesLongitude);
void* QGeoRectangle_United(void* ptr, void* rectangle);
char QGeoRectangle_Contains(void* ptr, void* rectangle);
char QGeoRectangle_Intersects(void* ptr, void* rectangle);
double QGeoRectangle_Height(void* ptr);
double QGeoRectangle_Width(void* ptr);
void* QGeoRectangle___QGeoRectangle_coordinates_atList4(void* ptr, int i);
void QGeoRectangle___QGeoRectangle_coordinates_setList4(void* ptr, void* i);
void* QGeoRectangle___QGeoRectangle_coordinates_newList4(void* ptr);
void* QGeoSatelliteInfo_NewQGeoSatelliteInfo();
void* QGeoSatelliteInfo_NewQGeoSatelliteInfo2(void* other);
void QGeoSatelliteInfo_RemoveAttribute(void* ptr, long long attribute);
void QGeoSatelliteInfo_SetAttribute(void* ptr, long long attribute, double value);
void QGeoSatelliteInfo_SetSatelliteIdentifier(void* ptr, int satId);
void QGeoSatelliteInfo_SetSatelliteSystem(void* ptr, long long system);
void QGeoSatelliteInfo_SetSignalStrength(void* ptr, int signalStrength);
void QGeoSatelliteInfo_DestroyQGeoSatelliteInfo(void* ptr);
long long QGeoSatelliteInfo_SatelliteSystem(void* ptr);
char QGeoSatelliteInfo_HasAttribute(void* ptr, long long attribute);
int QGeoSatelliteInfo_SatelliteIdentifier(void* ptr);
int QGeoSatelliteInfo_SignalStrength(void* ptr);
double QGeoSatelliteInfo_Attribute(void* ptr, long long attribute);
void* QGeoSatelliteInfoSource_QGeoSatelliteInfoSource_CreateDefaultSource(void* parent);
void* QGeoSatelliteInfoSource_QGeoSatelliteInfoSource_CreateSource(struct QtPositioning_PackedString sourceName, void* parent);
void* QGeoSatelliteInfoSource_NewQGeoSatelliteInfoSource(void* parent);
struct QtPositioning_PackedString QGeoSatelliteInfoSource_QGeoSatelliteInfoSource_Tr(char* s, char* c, int n);
struct QtPositioning_PackedString QGeoSatelliteInfoSource_QGeoSatelliteInfoSource_TrUtf8(char* s, char* c, int n);
struct QtPositioning_PackedString QGeoSatelliteInfoSource_QGeoSatelliteInfoSource_AvailableSources();
void QGeoSatelliteInfoSource_ConnectError2(void* ptr);
void QGeoSatelliteInfoSource_DisconnectError2(void* ptr);
void QGeoSatelliteInfoSource_Error2(void* ptr, long long satelliteError);
void QGeoSatelliteInfoSource_ConnectRequestTimeout(void* ptr);
void QGeoSatelliteInfoSource_DisconnectRequestTimeout(void* ptr);
void QGeoSatelliteInfoSource_RequestTimeout(void* ptr);
void QGeoSatelliteInfoSource_RequestUpdate(void* ptr, int timeout);
void QGeoSatelliteInfoSource_ConnectSatellitesInUseUpdated(void* ptr);
void QGeoSatelliteInfoSource_DisconnectSatellitesInUseUpdated(void* ptr);
void QGeoSatelliteInfoSource_SatellitesInUseUpdated(void* ptr, void* satellites);
void QGeoSatelliteInfoSource_ConnectSatellitesInViewUpdated(void* ptr);
void QGeoSatelliteInfoSource_DisconnectSatellitesInViewUpdated(void* ptr);
void QGeoSatelliteInfoSource_SatellitesInViewUpdated(void* ptr, void* satellites);
void QGeoSatelliteInfoSource_SetUpdateInterval(void* ptr, int msec);
void QGeoSatelliteInfoSource_SetUpdateIntervalDefault(void* ptr, int msec);
void QGeoSatelliteInfoSource_StartUpdates(void* ptr);
void QGeoSatelliteInfoSource_StopUpdates(void* ptr);
void QGeoSatelliteInfoSource_DestroyQGeoSatelliteInfoSource(void* ptr);
void QGeoSatelliteInfoSource_DestroyQGeoSatelliteInfoSourceDefault(void* ptr);
long long QGeoSatelliteInfoSource_Error(void* ptr);
struct QtPositioning_PackedString QGeoSatelliteInfoSource_SourceName(void* ptr);
void* QGeoSatelliteInfoSource_MetaObjectDefault(void* ptr);
int QGeoSatelliteInfoSource_MinimumUpdateInterval(void* ptr);
int QGeoSatelliteInfoSource_UpdateInterval(void* ptr);
void* QGeoSatelliteInfoSource___satellitesInUseUpdated_satellites_atList(void* ptr, int i);
void QGeoSatelliteInfoSource___satellitesInUseUpdated_satellites_setList(void* ptr, void* i);
void* QGeoSatelliteInfoSource___satellitesInUseUpdated_satellites_newList(void* ptr);
void* QGeoSatelliteInfoSource___satellitesInViewUpdated_satellites_atList(void* ptr, int i);
void QGeoSatelliteInfoSource___satellitesInViewUpdated_satellites_setList(void* ptr, void* i);
void* QGeoSatelliteInfoSource___satellitesInViewUpdated_satellites_newList(void* ptr);
void* QGeoSatelliteInfoSource___dynamicPropertyNames_atList(void* ptr, int i);
void QGeoSatelliteInfoSource___dynamicPropertyNames_setList(void* ptr, void* i);
void* QGeoSatelliteInfoSource___dynamicPropertyNames_newList(void* ptr);
void* QGeoSatelliteInfoSource___findChildren_atList2(void* ptr, int i);
void QGeoSatelliteInfoSource___findChildren_setList2(void* ptr, void* i);
void* QGeoSatelliteInfoSource___findChildren_newList2(void* ptr);
void* QGeoSatelliteInfoSource___findChildren_atList3(void* ptr, int i);
void QGeoSatelliteInfoSource___findChildren_setList3(void* ptr, void* i);
void* QGeoSatelliteInfoSource___findChildren_newList3(void* ptr);
void* QGeoSatelliteInfoSource___findChildren_atList(void* ptr, int i);
void QGeoSatelliteInfoSource___findChildren_setList(void* ptr, void* i);
void* QGeoSatelliteInfoSource___findChildren_newList(void* ptr);
void* QGeoSatelliteInfoSource___children_atList(void* ptr, int i);
void QGeoSatelliteInfoSource___children_setList(void* ptr, void* i);
void* QGeoSatelliteInfoSource___children_newList(void* ptr);
char QGeoSatelliteInfoSource_EventDefault(void* ptr, void* e);
char QGeoSatelliteInfoSource_EventFilterDefault(void* ptr, void* watched, void* event);
void QGeoSatelliteInfoSource_ChildEventDefault(void* ptr, void* event);
void QGeoSatelliteInfoSource_ConnectNotifyDefault(void* ptr, void* sign);
void QGeoSatelliteInfoSource_CustomEventDefault(void* ptr, void* event);
void QGeoSatelliteInfoSource_DeleteLaterDefault(void* ptr);
void QGeoSatelliteInfoSource_DisconnectNotifyDefault(void* ptr, void* sign);
void QGeoSatelliteInfoSource_TimerEventDefault(void* ptr, void* event);
void* QGeoShape_NewQGeoShape();
void* QGeoShape_NewQGeoShape2(void* other);
void QGeoShape_DestroyQGeoShape(void* ptr);
void* QGeoShape_Center(void* ptr);
void* QGeoShape_BoundingGeoRectangle(void* ptr);
long long QGeoShape_Type(void* ptr);
struct QtPositioning_PackedString QGeoShape_ToString(void* ptr);
char QGeoShape_Contains(void* ptr, void* coordinate);
char QGeoShape_IsEmpty(void* ptr);
char QGeoShape_IsValid(void* ptr);
void* QNmeaPositionInfoSource_NewQNmeaPositionInfoSource(long long updateMode, void* parent);
char QNmeaPositionInfoSource_ParsePosInfoFromNmeaData(void* ptr, char* data, int size, void* posInfo, char* hasFix);
char QNmeaPositionInfoSource_ParsePosInfoFromNmeaDataDefault(void* ptr, char* data, int size, void* posInfo, char* hasFix);
void QNmeaPositionInfoSource_RequestUpdate(void* ptr, int msec);
void QNmeaPositionInfoSource_RequestUpdateDefault(void* ptr, int msec);
void QNmeaPositionInfoSource_SetDevice(void* ptr, void* device);
void QNmeaPositionInfoSource_SetUserEquivalentRangeError(void* ptr, double uere);
void QNmeaPositionInfoSource_StartUpdates(void* ptr);
void QNmeaPositionInfoSource_StartUpdatesDefault(void* ptr);
void QNmeaPositionInfoSource_StopUpdates(void* ptr);
void QNmeaPositionInfoSource_StopUpdatesDefault(void* ptr);
void QNmeaPositionInfoSource_DestroyQNmeaPositionInfoSource(void* ptr);
void QNmeaPositionInfoSource_DestroyQNmeaPositionInfoSourceDefault(void* ptr);
void* QNmeaPositionInfoSource_LastKnownPosition(void* ptr, char fromSatellitePositioningMethodsOnly);
void* QNmeaPositionInfoSource_LastKnownPositionDefault(void* ptr, char fromSatellitePositioningMethodsOnly);
long long QNmeaPositionInfoSource_Error(void* ptr);
long long QNmeaPositionInfoSource_ErrorDefault(void* ptr);
long long QNmeaPositionInfoSource_SupportedPositioningMethods(void* ptr);
long long QNmeaPositionInfoSource_SupportedPositioningMethodsDefault(void* ptr);
void* QNmeaPositionInfoSource_Device(void* ptr);
long long QNmeaPositionInfoSource_UpdateMode(void* ptr);
double QNmeaPositionInfoSource_UserEquivalentRangeError(void* ptr);
int QNmeaPositionInfoSource_MinimumUpdateInterval(void* ptr);
int QNmeaPositionInfoSource_MinimumUpdateIntervalDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif