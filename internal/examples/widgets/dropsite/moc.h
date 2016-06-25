

#pragma once

#ifndef GO_MAIN_H
#define GO_MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

void DropArea_ConnectChanged(void* ptr);
void DropArea_DisconnectChanged(void* ptr);
void DropArea_Changed(void* ptr, void* mimeData);
void* DropArea_NewDropArea(void* parent, int f);
void DropArea_DestroyDropArea(void* ptr);
void DropArea_SetPixmap(void* ptr, void* vqp);
void DropArea_SetPixmapDefault(void* ptr, void* vqp);
void DropArea_SetText(void* ptr, char* vqs);
void DropArea_SetTextDefault(void* ptr, char* vqs);
void DropArea_ChangeEvent(void* ptr, void* ev);
void DropArea_ChangeEventDefault(void* ptr, void* ev);
void DropArea_Clear(void* ptr);
void DropArea_ClearDefault(void* ptr);
void DropArea_ContextMenuEvent(void* ptr, void* ev);
void DropArea_ContextMenuEventDefault(void* ptr, void* ev);
void DropArea_FocusInEvent(void* ptr, void* ev);
void DropArea_FocusInEventDefault(void* ptr, void* ev);
int DropArea_FocusNextPrevChild(void* ptr, int next);
int DropArea_FocusNextPrevChildDefault(void* ptr, int next);
void DropArea_FocusOutEvent(void* ptr, void* ev);
void DropArea_FocusOutEventDefault(void* ptr, void* ev);
int DropArea_HeightForWidth(void* ptr, int w);
int DropArea_HeightForWidthDefault(void* ptr, int w);
void DropArea_KeyPressEvent(void* ptr, void* ev);
void DropArea_KeyPressEventDefault(void* ptr, void* ev);
void* DropArea_MinimumSizeHint(void* ptr);
void* DropArea_MinimumSizeHintDefault(void* ptr);
void DropArea_MouseMoveEvent(void* ptr, void* ev);
void DropArea_MouseMoveEventDefault(void* ptr, void* ev);
void DropArea_MousePressEvent(void* ptr, void* ev);
void DropArea_MousePressEventDefault(void* ptr, void* ev);
void DropArea_MouseReleaseEvent(void* ptr, void* ev);
void DropArea_MouseReleaseEventDefault(void* ptr, void* ev);
void DropArea_PaintEvent(void* ptr, void* vqp);
void DropArea_PaintEventDefault(void* ptr, void* vqp);
void DropArea_SetMovie(void* ptr, void* movie);
void DropArea_SetMovieDefault(void* ptr, void* movie);
;
;
void DropArea_SetNum(void* ptr, int num);
void DropArea_SetNumDefault(void* ptr, int num);
void DropArea_SetPicture(void* ptr, void* picture);
void DropArea_SetPictureDefault(void* ptr, void* picture);
void* DropArea_SizeHint(void* ptr);
void* DropArea_SizeHintDefault(void* ptr);
void DropArea_ActionEvent(void* ptr, void* event);
void DropArea_ActionEventDefault(void* ptr, void* event);
void DropArea_DragEnterEvent(void* ptr, void* event);
void DropArea_DragEnterEventDefault(void* ptr, void* event);
void DropArea_DragLeaveEvent(void* ptr, void* event);
void DropArea_DragLeaveEventDefault(void* ptr, void* event);
void DropArea_DragMoveEvent(void* ptr, void* event);
void DropArea_DragMoveEventDefault(void* ptr, void* event);
void DropArea_DropEvent(void* ptr, void* event);
void DropArea_DropEventDefault(void* ptr, void* event);
void DropArea_EnterEvent(void* ptr, void* event);
void DropArea_EnterEventDefault(void* ptr, void* event);
void DropArea_HideEvent(void* ptr, void* event);
void DropArea_HideEventDefault(void* ptr, void* event);
void DropArea_LeaveEvent(void* ptr, void* event);
void DropArea_LeaveEventDefault(void* ptr, void* event);
void DropArea_MoveEvent(void* ptr, void* event);
void DropArea_MoveEventDefault(void* ptr, void* event);
void DropArea_SetEnabled(void* ptr, int vbo);
void DropArea_SetEnabledDefault(void* ptr, int vbo);
void DropArea_SetStyleSheet(void* ptr, char* styleSheet);
void DropArea_SetStyleSheetDefault(void* ptr, char* styleSheet);
void DropArea_SetVisible(void* ptr, int visible);
void DropArea_SetVisibleDefault(void* ptr, int visible);
void DropArea_SetWindowModified(void* ptr, int vbo);
void DropArea_SetWindowModifiedDefault(void* ptr, int vbo);
void DropArea_SetWindowTitle(void* ptr, char* vqs);
void DropArea_SetWindowTitleDefault(void* ptr, char* vqs);
void DropArea_ShowEvent(void* ptr, void* event);
void DropArea_ShowEventDefault(void* ptr, void* event);
int DropArea_Close(void* ptr);
int DropArea_CloseDefault(void* ptr);
void DropArea_CloseEvent(void* ptr, void* event);
void DropArea_CloseEventDefault(void* ptr, void* event);
int DropArea_HasHeightForWidth(void* ptr);
int DropArea_HasHeightForWidthDefault(void* ptr);
void DropArea_Hide(void* ptr);
void DropArea_HideDefault(void* ptr);
void DropArea_InputMethodEvent(void* ptr, void* event);
void DropArea_InputMethodEventDefault(void* ptr, void* event);
void* DropArea_InputMethodQuery(void* ptr, int query);
void* DropArea_InputMethodQueryDefault(void* ptr, int query);
void DropArea_KeyReleaseEvent(void* ptr, void* event);
void DropArea_KeyReleaseEventDefault(void* ptr, void* event);
void DropArea_Lower(void* ptr);
void DropArea_LowerDefault(void* ptr);
void DropArea_MouseDoubleClickEvent(void* ptr, void* event);
void DropArea_MouseDoubleClickEventDefault(void* ptr, void* event);
int DropArea_NativeEvent(void* ptr, char* eventType, void* message, long result);
int DropArea_NativeEventDefault(void* ptr, char* eventType, void* message, long result);
void DropArea_Raise(void* ptr);
void DropArea_RaiseDefault(void* ptr);
void DropArea_Repaint(void* ptr);
void DropArea_RepaintDefault(void* ptr);
void DropArea_ResizeEvent(void* ptr, void* event);
void DropArea_ResizeEventDefault(void* ptr, void* event);
void DropArea_SetDisabled(void* ptr, int disable);
void DropArea_SetDisabledDefault(void* ptr, int disable);
void DropArea_SetFocus2(void* ptr);
void DropArea_SetFocus2Default(void* ptr);
void DropArea_SetHidden(void* ptr, int hidden);
void DropArea_SetHiddenDefault(void* ptr, int hidden);
void DropArea_Show(void* ptr);
void DropArea_ShowDefault(void* ptr);
void DropArea_ShowFullScreen(void* ptr);
void DropArea_ShowFullScreenDefault(void* ptr);
void DropArea_ShowMaximized(void* ptr);
void DropArea_ShowMaximizedDefault(void* ptr);
void DropArea_ShowMinimized(void* ptr);
void DropArea_ShowMinimizedDefault(void* ptr);
void DropArea_ShowNormal(void* ptr);
void DropArea_ShowNormalDefault(void* ptr);
void DropArea_TabletEvent(void* ptr, void* event);
void DropArea_TabletEventDefault(void* ptr, void* event);
void DropArea_Update(void* ptr);
void DropArea_UpdateDefault(void* ptr);
void DropArea_UpdateMicroFocus(void* ptr);
void DropArea_UpdateMicroFocusDefault(void* ptr);
void DropArea_WheelEvent(void* ptr, void* event);
void DropArea_WheelEventDefault(void* ptr, void* event);
void DropArea_TimerEvent(void* ptr, void* event);
void DropArea_TimerEventDefault(void* ptr, void* event);
void DropArea_ChildEvent(void* ptr, void* event);
void DropArea_ChildEventDefault(void* ptr, void* event);
void DropArea_ConnectNotify(void* ptr, void* sign);
void DropArea_ConnectNotifyDefault(void* ptr, void* sign);
void DropArea_CustomEvent(void* ptr, void* event);
void DropArea_CustomEventDefault(void* ptr, void* event);
void DropArea_DeleteLater(void* ptr);
void DropArea_DeleteLaterDefault(void* ptr);
void DropArea_DisconnectNotify(void* ptr, void* sign);
void DropArea_DisconnectNotifyDefault(void* ptr, void* sign);
int DropArea_EventFilter(void* ptr, void* watched, void* event);
int DropArea_EventFilterDefault(void* ptr, void* watched, void* event);
;
;
void DropSiteWindow_UpdateFormatsTable(void* ptr, void* mimeData);
void* DropSiteWindow_NewDropSiteWindow(void* parent, int f);
void DropSiteWindow_DestroyDropSiteWindow(void* ptr);
void DropSiteWindow_ActionEvent(void* ptr, void* event);
void DropSiteWindow_ActionEventDefault(void* ptr, void* event);
void DropSiteWindow_DragEnterEvent(void* ptr, void* event);
void DropSiteWindow_DragEnterEventDefault(void* ptr, void* event);
void DropSiteWindow_DragLeaveEvent(void* ptr, void* event);
void DropSiteWindow_DragLeaveEventDefault(void* ptr, void* event);
void DropSiteWindow_DragMoveEvent(void* ptr, void* event);
void DropSiteWindow_DragMoveEventDefault(void* ptr, void* event);
void DropSiteWindow_DropEvent(void* ptr, void* event);
void DropSiteWindow_DropEventDefault(void* ptr, void* event);
void DropSiteWindow_EnterEvent(void* ptr, void* event);
void DropSiteWindow_EnterEventDefault(void* ptr, void* event);
void DropSiteWindow_FocusInEvent(void* ptr, void* event);
void DropSiteWindow_FocusInEventDefault(void* ptr, void* event);
void DropSiteWindow_FocusOutEvent(void* ptr, void* event);
void DropSiteWindow_FocusOutEventDefault(void* ptr, void* event);
void DropSiteWindow_HideEvent(void* ptr, void* event);
void DropSiteWindow_HideEventDefault(void* ptr, void* event);
void DropSiteWindow_LeaveEvent(void* ptr, void* event);
void DropSiteWindow_LeaveEventDefault(void* ptr, void* event);
void* DropSiteWindow_MinimumSizeHint(void* ptr);
void* DropSiteWindow_MinimumSizeHintDefault(void* ptr);
void DropSiteWindow_MoveEvent(void* ptr, void* event);
void DropSiteWindow_MoveEventDefault(void* ptr, void* event);
void DropSiteWindow_PaintEvent(void* ptr, void* event);
void DropSiteWindow_PaintEventDefault(void* ptr, void* event);
void DropSiteWindow_SetEnabled(void* ptr, int vbo);
void DropSiteWindow_SetEnabledDefault(void* ptr, int vbo);
void DropSiteWindow_SetStyleSheet(void* ptr, char* styleSheet);
void DropSiteWindow_SetStyleSheetDefault(void* ptr, char* styleSheet);
void DropSiteWindow_SetVisible(void* ptr, int visible);
void DropSiteWindow_SetVisibleDefault(void* ptr, int visible);
void DropSiteWindow_SetWindowModified(void* ptr, int vbo);
void DropSiteWindow_SetWindowModifiedDefault(void* ptr, int vbo);
void DropSiteWindow_SetWindowTitle(void* ptr, char* vqs);
void DropSiteWindow_SetWindowTitleDefault(void* ptr, char* vqs);
void DropSiteWindow_ShowEvent(void* ptr, void* event);
void DropSiteWindow_ShowEventDefault(void* ptr, void* event);
void* DropSiteWindow_SizeHint(void* ptr);
void* DropSiteWindow_SizeHintDefault(void* ptr);
void DropSiteWindow_ChangeEvent(void* ptr, void* event);
void DropSiteWindow_ChangeEventDefault(void* ptr, void* event);
int DropSiteWindow_Close(void* ptr);
int DropSiteWindow_CloseDefault(void* ptr);
void DropSiteWindow_CloseEvent(void* ptr, void* event);
void DropSiteWindow_CloseEventDefault(void* ptr, void* event);
void DropSiteWindow_ContextMenuEvent(void* ptr, void* event);
void DropSiteWindow_ContextMenuEventDefault(void* ptr, void* event);
int DropSiteWindow_FocusNextPrevChild(void* ptr, int next);
int DropSiteWindow_FocusNextPrevChildDefault(void* ptr, int next);
int DropSiteWindow_HasHeightForWidth(void* ptr);
int DropSiteWindow_HasHeightForWidthDefault(void* ptr);
int DropSiteWindow_HeightForWidth(void* ptr, int w);
int DropSiteWindow_HeightForWidthDefault(void* ptr, int w);
void DropSiteWindow_Hide(void* ptr);
void DropSiteWindow_HideDefault(void* ptr);
void DropSiteWindow_InputMethodEvent(void* ptr, void* event);
void DropSiteWindow_InputMethodEventDefault(void* ptr, void* event);
void* DropSiteWindow_InputMethodQuery(void* ptr, int query);
void* DropSiteWindow_InputMethodQueryDefault(void* ptr, int query);
void DropSiteWindow_KeyPressEvent(void* ptr, void* event);
void DropSiteWindow_KeyPressEventDefault(void* ptr, void* event);
void DropSiteWindow_KeyReleaseEvent(void* ptr, void* event);
void DropSiteWindow_KeyReleaseEventDefault(void* ptr, void* event);
void DropSiteWindow_Lower(void* ptr);
void DropSiteWindow_LowerDefault(void* ptr);
void DropSiteWindow_MouseDoubleClickEvent(void* ptr, void* event);
void DropSiteWindow_MouseDoubleClickEventDefault(void* ptr, void* event);
void DropSiteWindow_MouseMoveEvent(void* ptr, void* event);
void DropSiteWindow_MouseMoveEventDefault(void* ptr, void* event);
void DropSiteWindow_MousePressEvent(void* ptr, void* event);
void DropSiteWindow_MousePressEventDefault(void* ptr, void* event);
void DropSiteWindow_MouseReleaseEvent(void* ptr, void* event);
void DropSiteWindow_MouseReleaseEventDefault(void* ptr, void* event);
int DropSiteWindow_NativeEvent(void* ptr, char* eventType, void* message, long result);
int DropSiteWindow_NativeEventDefault(void* ptr, char* eventType, void* message, long result);
void DropSiteWindow_Raise(void* ptr);
void DropSiteWindow_RaiseDefault(void* ptr);
void DropSiteWindow_Repaint(void* ptr);
void DropSiteWindow_RepaintDefault(void* ptr);
void DropSiteWindow_ResizeEvent(void* ptr, void* event);
void DropSiteWindow_ResizeEventDefault(void* ptr, void* event);
void DropSiteWindow_SetDisabled(void* ptr, int disable);
void DropSiteWindow_SetDisabledDefault(void* ptr, int disable);
void DropSiteWindow_SetFocus2(void* ptr);
void DropSiteWindow_SetFocus2Default(void* ptr);
void DropSiteWindow_SetHidden(void* ptr, int hidden);
void DropSiteWindow_SetHiddenDefault(void* ptr, int hidden);
void DropSiteWindow_Show(void* ptr);
void DropSiteWindow_ShowDefault(void* ptr);
void DropSiteWindow_ShowFullScreen(void* ptr);
void DropSiteWindow_ShowFullScreenDefault(void* ptr);
void DropSiteWindow_ShowMaximized(void* ptr);
void DropSiteWindow_ShowMaximizedDefault(void* ptr);
void DropSiteWindow_ShowMinimized(void* ptr);
void DropSiteWindow_ShowMinimizedDefault(void* ptr);
void DropSiteWindow_ShowNormal(void* ptr);
void DropSiteWindow_ShowNormalDefault(void* ptr);
void DropSiteWindow_TabletEvent(void* ptr, void* event);
void DropSiteWindow_TabletEventDefault(void* ptr, void* event);
void DropSiteWindow_Update(void* ptr);
void DropSiteWindow_UpdateDefault(void* ptr);
void DropSiteWindow_UpdateMicroFocus(void* ptr);
void DropSiteWindow_UpdateMicroFocusDefault(void* ptr);
void DropSiteWindow_WheelEvent(void* ptr, void* event);
void DropSiteWindow_WheelEventDefault(void* ptr, void* event);
void DropSiteWindow_TimerEvent(void* ptr, void* event);
void DropSiteWindow_TimerEventDefault(void* ptr, void* event);
void DropSiteWindow_ChildEvent(void* ptr, void* event);
void DropSiteWindow_ChildEventDefault(void* ptr, void* event);
void DropSiteWindow_ConnectNotify(void* ptr, void* sign);
void DropSiteWindow_ConnectNotifyDefault(void* ptr, void* sign);
void DropSiteWindow_CustomEvent(void* ptr, void* event);
void DropSiteWindow_CustomEventDefault(void* ptr, void* event);
void DropSiteWindow_DeleteLater(void* ptr);
void DropSiteWindow_DeleteLaterDefault(void* ptr);
void DropSiteWindow_DisconnectNotify(void* ptr, void* sign);
void DropSiteWindow_DisconnectNotifyDefault(void* ptr, void* sign);
int DropSiteWindow_EventFilter(void* ptr, void* watched, void* event);
int DropSiteWindow_EventFilterDefault(void* ptr, void* watched, void* event);
;
;

#ifdef __cplusplus
}
#endif

#endif