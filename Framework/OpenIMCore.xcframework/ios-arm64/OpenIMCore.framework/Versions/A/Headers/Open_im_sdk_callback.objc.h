// Objective-C API for talking to bitbucket.org/interdigital/im-sdk-core/open_im_sdk_callback Go package.
//   gobind -lang=objc bitbucket.org/interdigital/im-sdk-core/open_im_sdk_callback
//
// File is generated by gobind. Do not edit.

#ifndef __Open_im_sdk_callback_H__
#define __Open_im_sdk_callback_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@protocol Open_im_sdk_callbackBase;
@class Open_im_sdk_callbackBase;
@protocol Open_im_sdk_callbackOnAdvancedMsgListener;
@class Open_im_sdk_callbackOnAdvancedMsgListener;
@protocol Open_im_sdk_callbackOnBatchMsgListener;
@class Open_im_sdk_callbackOnBatchMsgListener;
@protocol Open_im_sdk_callbackOnConnListener;
@class Open_im_sdk_callbackOnConnListener;
@protocol Open_im_sdk_callbackOnConversationListener;
@class Open_im_sdk_callbackOnConversationListener;
@protocol Open_im_sdk_callbackOnCustomBusinessListener;
@class Open_im_sdk_callbackOnCustomBusinessListener;
@protocol Open_im_sdk_callbackOnFriendshipListener;
@class Open_im_sdk_callbackOnFriendshipListener;
@protocol Open_im_sdk_callbackOnFriendshipListenerSdk;
@class Open_im_sdk_callbackOnFriendshipListenerSdk;
@protocol Open_im_sdk_callbackOnGroupListener;
@class Open_im_sdk_callbackOnGroupListener;
@protocol Open_im_sdk_callbackOnListenerForService;
@class Open_im_sdk_callbackOnListenerForService;
@protocol Open_im_sdk_callbackOnMessageKvInfoListener;
@class Open_im_sdk_callbackOnMessageKvInfoListener;
@protocol Open_im_sdk_callbackOnSignalingListener;
@class Open_im_sdk_callbackOnSignalingListener;
@protocol Open_im_sdk_callbackOnUserListener;
@class Open_im_sdk_callbackOnUserListener;
@protocol Open_im_sdk_callbackSendMsgCallBack;
@class Open_im_sdk_callbackSendMsgCallBack;
@protocol Open_im_sdk_callbackUploadFileCallback;
@class Open_im_sdk_callbackUploadFileCallback;
@protocol Open_im_sdk_callbackUploadLogProgress;
@class Open_im_sdk_callbackUploadLogProgress;

@protocol Open_im_sdk_callbackBase <NSObject>
- (void)onError:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onSuccess:(NSString* _Nullable)data;
@end

@protocol Open_im_sdk_callbackOnAdvancedMsgListener <NSObject>
- (void)onMsgDeleted:(NSString* _Nullable)message;
- (void)onNewRecvMessageRevoked:(NSString* _Nullable)messageRevoked;
- (void)onRecvC2CReadReceipt:(NSString* _Nullable)msgReceiptList;
- (void)onRecvNewMessage:(NSString* _Nullable)message;
- (void)onRecvOfflineNewMessage:(NSString* _Nullable)message;
- (void)onRecvOnlineOnlyMessage:(NSString* _Nullable)message;
@end

@protocol Open_im_sdk_callbackOnBatchMsgListener <NSObject>
- (void)onRecvNewMessages:(NSString* _Nullable)messageList;
- (void)onRecvOfflineNewMessages:(NSString* _Nullable)messageList;
@end

@protocol Open_im_sdk_callbackOnConnListener <NSObject>
- (void)onConnectFailed:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onConnectSuccess;
- (void)onConnecting;
- (void)onKickedOffline;
- (void)onUserTokenExpired;
- (void)onUserTokenInvalid:(NSString* _Nullable)errMsg;
@end

@protocol Open_im_sdk_callbackOnConversationListener <NSObject>
- (void)onConversationChanged:(NSString* _Nullable)conversationList;
- (void)onConversationUserInputStatusChanged:(NSString* _Nullable)change;
- (void)onNewConversation:(NSString* _Nullable)conversationList;
- (void)onSyncServerFailed:(BOOL)reinstalled;
- (void)onSyncServerFinish:(BOOL)reinstalled;
- (void)onSyncServerProgress:(long)progress;
- (void)onSyncServerStart:(BOOL)reinstalled;
- (void)onTotalUnreadMessageCountChanged:(int32_t)totalUnreadCount;
@end

@protocol Open_im_sdk_callbackOnCustomBusinessListener <NSObject>
- (void)onRecvCustomBusinessMessage:(NSString* _Nullable)businessMessage;
@end

@protocol Open_im_sdk_callbackOnFriendshipListener <NSObject>
- (void)onBlackAdded:(NSString* _Nullable)blackInfo;
- (void)onBlackDeleted:(NSString* _Nullable)blackInfo;
- (void)onFriendAdded:(NSString* _Nullable)friendInfo;
- (void)onFriendApplicationAccepted:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationAdded:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationDeleted:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationRejected:(NSString* _Nullable)friendApplication;
- (void)onFriendDeleted:(NSString* _Nullable)friendInfo;
- (void)onFriendInfoChanged:(NSString* _Nullable)friendInfo;
@end

@protocol Open_im_sdk_callbackOnFriendshipListenerSdk <NSObject>
// skipped method OnFriendshipListenerSdk.OnBlackAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnBlackDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationAccepted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationRejected with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendInfoChanged with unsupported parameter or return types

@end

@protocol Open_im_sdk_callbackOnGroupListener <NSObject>
- (void)onGroupApplicationAccepted:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationAdded:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationDeleted:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationRejected:(NSString* _Nullable)groupApplication;
- (void)onGroupDismissed:(NSString* _Nullable)groupInfo;
- (void)onGroupInfoChanged:(NSString* _Nullable)groupInfo;
- (void)onGroupMemberAdded:(NSString* _Nullable)groupMemberInfo;
- (void)onGroupMemberDeleted:(NSString* _Nullable)groupMemberInfo;
- (void)onGroupMemberInfoChanged:(NSString* _Nullable)groupMemberInfo;
- (void)onJoinedGroupAdded:(NSString* _Nullable)groupInfo;
- (void)onJoinedGroupDeleted:(NSString* _Nullable)groupInfo;
@end

@protocol Open_im_sdk_callbackOnListenerForService <NSObject>
/**
 * OnFriendApplicationAccepted Friend request has been accepted
 */
- (void)onFriendApplicationAccepted:(NSString* _Nullable)friendApplication;
/**
 * OnFriendApplicationAdded Someone applied to add you as a friend
 */
- (void)onFriendApplicationAdded:(NSString* _Nullable)friendApplication;
/**
 * OnGroupApplicationAccepted Group join application has been accepted
 */
- (void)onGroupApplicationAccepted:(NSString* _Nullable)groupApplication;
/**
 * OnGroupApplicationAdded Someone applied to join a group
 */
- (void)onGroupApplicationAdded:(NSString* _Nullable)groupApplication;
/**
 * OnRecvNewMessage Received a new message
 */
- (void)onRecvNewMessage:(NSString* _Nullable)message;
@end

@protocol Open_im_sdk_callbackOnMessageKvInfoListener <NSObject>
- (void)onMessageKvInfoChanged:(NSString* _Nullable)messageChangedList;
@end

@protocol Open_im_sdk_callbackOnSignalingListener <NSObject>
- (void)onHangUp:(NSString* _Nullable)hangUpCallback;
- (void)onInvitationCancelled:(NSString* _Nullable)invitationCancelledCallback;
- (void)onInvitationTimeout:(NSString* _Nullable)invitationTimeoutCallback;
- (void)onInviteeAccepted:(NSString* _Nullable)inviteeAcceptedCallback;
- (void)onInviteeAcceptedByOtherDevice:(NSString* _Nullable)inviteeAcceptedCallback;
- (void)onInviteeRejected:(NSString* _Nullable)inviteeRejectedCallback;
- (void)onInviteeRejectedByOtherDevice:(NSString* _Nullable)inviteeRejectedCallback;
- (void)onReceiveNewInvitation:(NSString* _Nullable)receiveNewInvitationCallback;
- (void)onRoomParticipantConnected:(NSString* _Nullable)onRoomParticipantConnectedCallback;
- (void)onRoomParticipantDisconnected:(NSString* _Nullable)onRoomParticipantDisconnectedCallback;
@end

@protocol Open_im_sdk_callbackOnUserListener <NSObject>
- (void)onSelfInfoUpdated:(NSString* _Nullable)userInfo;
- (void)onUserCommandAdd:(NSString* _Nullable)userCommand;
- (void)onUserCommandDelete:(NSString* _Nullable)userCommand;
- (void)onUserCommandUpdate:(NSString* _Nullable)userCommand;
- (void)onUserStatusChanged:(NSString* _Nullable)userOnlineStatus;
@end

@protocol Open_im_sdk_callbackSendMsgCallBack <NSObject>
- (void)onError:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onProgress:(long)progress;
- (void)onSuccess:(NSString* _Nullable)data;
@end

@protocol Open_im_sdk_callbackUploadFileCallback <NSObject>
/**
 * Complete The file upload is complete, providing the final size, URL, and type of the file
 */
- (void)complete:(int64_t)size url:(NSString* _Nullable)url typ:(long)typ;
/**
 * HashPartComplete All parts have been hashed, providing the combined hash of all parts and the final file hash
 */
- (void)hashPartComplete:(NSString* _Nullable)partsHash fileHash:(NSString* _Nullable)fileHash;
/**
 * HashPartProgress Progress of hashing each part, including the part index, size, and hash value
 */
- (void)hashPartProgress:(long)index size:(int64_t)size partHash:(NSString* _Nullable)partHash;
/**
 * Open a file with a given size
 */
- (void)open:(int64_t)size;
/**
 * PartSize Set the size of each part and the total number of parts
 */
- (void)partSize:(int64_t)partSize num:(long)num;
/**
 * UploadComplete The entire file upload progress, including the file size, stream size, and storage size
 */
- (void)uploadComplete:(int64_t)fileSize streamSize:(int64_t)streamSize storageSize:(int64_t)storageSize;
/**
 * UploadID Upload ID is generated and provided
 */
- (void)uploadID:(NSString* _Nullable)uploadID;
/**
 * UploadPartComplete A specific part has completed uploading, providing the part index, size, and hash value
 */
- (void)uploadPartComplete:(long)index partSize:(int64_t)partSize partHash:(NSString* _Nullable)partHash;
@end

@protocol Open_im_sdk_callbackUploadLogProgress <NSObject>
- (void)onProgress:(int64_t)current size:(int64_t)size;
@end

// skipped function NewOnFriendshipListenerSdk with unsupported parameter or return types


@class Open_im_sdk_callbackBase;

@class Open_im_sdk_callbackOnAdvancedMsgListener;

@class Open_im_sdk_callbackOnBatchMsgListener;

@class Open_im_sdk_callbackOnConnListener;

@class Open_im_sdk_callbackOnConversationListener;

@class Open_im_sdk_callbackOnCustomBusinessListener;

@class Open_im_sdk_callbackOnFriendshipListener;

@class Open_im_sdk_callbackOnFriendshipListenerSdk;

@class Open_im_sdk_callbackOnGroupListener;

@class Open_im_sdk_callbackOnListenerForService;

@class Open_im_sdk_callbackOnMessageKvInfoListener;

@class Open_im_sdk_callbackOnSignalingListener;

@class Open_im_sdk_callbackOnUserListener;

@class Open_im_sdk_callbackSendMsgCallBack;

@class Open_im_sdk_callbackUploadFileCallback;

@class Open_im_sdk_callbackUploadLogProgress;

@interface Open_im_sdk_callbackBase : NSObject <goSeqRefInterface, Open_im_sdk_callbackBase> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onError:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onSuccess:(NSString* _Nullable)data;
@end

@interface Open_im_sdk_callbackOnAdvancedMsgListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnAdvancedMsgListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onMsgDeleted:(NSString* _Nullable)message;
- (void)onNewRecvMessageRevoked:(NSString* _Nullable)messageRevoked;
- (void)onRecvC2CReadReceipt:(NSString* _Nullable)msgReceiptList;
- (void)onRecvNewMessage:(NSString* _Nullable)message;
- (void)onRecvOfflineNewMessage:(NSString* _Nullable)message;
- (void)onRecvOnlineOnlyMessage:(NSString* _Nullable)message;
@end

@interface Open_im_sdk_callbackOnBatchMsgListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnBatchMsgListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onRecvNewMessages:(NSString* _Nullable)messageList;
- (void)onRecvOfflineNewMessages:(NSString* _Nullable)messageList;
@end

@interface Open_im_sdk_callbackOnConnListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnConnListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onConnectFailed:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onConnectSuccess;
- (void)onConnecting;
- (void)onKickedOffline;
- (void)onUserTokenExpired;
- (void)onUserTokenInvalid:(NSString* _Nullable)errMsg;
@end

@interface Open_im_sdk_callbackOnConversationListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnConversationListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onConversationChanged:(NSString* _Nullable)conversationList;
- (void)onConversationUserInputStatusChanged:(NSString* _Nullable)change;
- (void)onNewConversation:(NSString* _Nullable)conversationList;
- (void)onSyncServerFailed:(BOOL)reinstalled;
- (void)onSyncServerFinish:(BOOL)reinstalled;
- (void)onSyncServerProgress:(long)progress;
- (void)onSyncServerStart:(BOOL)reinstalled;
- (void)onTotalUnreadMessageCountChanged:(int32_t)totalUnreadCount;
@end

@interface Open_im_sdk_callbackOnCustomBusinessListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnCustomBusinessListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onRecvCustomBusinessMessage:(NSString* _Nullable)businessMessage;
@end

@interface Open_im_sdk_callbackOnFriendshipListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnFriendshipListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onBlackAdded:(NSString* _Nullable)blackInfo;
- (void)onBlackDeleted:(NSString* _Nullable)blackInfo;
- (void)onFriendAdded:(NSString* _Nullable)friendInfo;
- (void)onFriendApplicationAccepted:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationAdded:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationDeleted:(NSString* _Nullable)friendApplication;
- (void)onFriendApplicationRejected:(NSString* _Nullable)friendApplication;
- (void)onFriendDeleted:(NSString* _Nullable)friendInfo;
- (void)onFriendInfoChanged:(NSString* _Nullable)friendInfo;
@end

@interface Open_im_sdk_callbackOnFriendshipListenerSdk : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnFriendshipListenerSdk> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
// skipped method OnFriendshipListenerSdk.OnBlackAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnBlackDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationAccepted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationAdded with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendApplicationRejected with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendDeleted with unsupported parameter or return types

// skipped method OnFriendshipListenerSdk.OnFriendInfoChanged with unsupported parameter or return types

@end

@interface Open_im_sdk_callbackOnGroupListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnGroupListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onGroupApplicationAccepted:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationAdded:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationDeleted:(NSString* _Nullable)groupApplication;
- (void)onGroupApplicationRejected:(NSString* _Nullable)groupApplication;
- (void)onGroupDismissed:(NSString* _Nullable)groupInfo;
- (void)onGroupInfoChanged:(NSString* _Nullable)groupInfo;
- (void)onGroupMemberAdded:(NSString* _Nullable)groupMemberInfo;
- (void)onGroupMemberDeleted:(NSString* _Nullable)groupMemberInfo;
- (void)onGroupMemberInfoChanged:(NSString* _Nullable)groupMemberInfo;
- (void)onJoinedGroupAdded:(NSString* _Nullable)groupInfo;
- (void)onJoinedGroupDeleted:(NSString* _Nullable)groupInfo;
@end

@interface Open_im_sdk_callbackOnListenerForService : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnListenerForService> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * OnFriendApplicationAccepted Friend request has been accepted
 */
- (void)onFriendApplicationAccepted:(NSString* _Nullable)friendApplication;
/**
 * OnFriendApplicationAdded Someone applied to add you as a friend
 */
- (void)onFriendApplicationAdded:(NSString* _Nullable)friendApplication;
/**
 * OnGroupApplicationAccepted Group join application has been accepted
 */
- (void)onGroupApplicationAccepted:(NSString* _Nullable)groupApplication;
/**
 * OnGroupApplicationAdded Someone applied to join a group
 */
- (void)onGroupApplicationAdded:(NSString* _Nullable)groupApplication;
/**
 * OnRecvNewMessage Received a new message
 */
- (void)onRecvNewMessage:(NSString* _Nullable)message;
@end

@interface Open_im_sdk_callbackOnMessageKvInfoListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnMessageKvInfoListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onMessageKvInfoChanged:(NSString* _Nullable)messageChangedList;
@end

@interface Open_im_sdk_callbackOnSignalingListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnSignalingListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onHangUp:(NSString* _Nullable)hangUpCallback;
- (void)onInvitationCancelled:(NSString* _Nullable)invitationCancelledCallback;
- (void)onInvitationTimeout:(NSString* _Nullable)invitationTimeoutCallback;
- (void)onInviteeAccepted:(NSString* _Nullable)inviteeAcceptedCallback;
- (void)onInviteeAcceptedByOtherDevice:(NSString* _Nullable)inviteeAcceptedCallback;
- (void)onInviteeRejected:(NSString* _Nullable)inviteeRejectedCallback;
- (void)onInviteeRejectedByOtherDevice:(NSString* _Nullable)inviteeRejectedCallback;
- (void)onReceiveNewInvitation:(NSString* _Nullable)receiveNewInvitationCallback;
- (void)onRoomParticipantConnected:(NSString* _Nullable)onRoomParticipantConnectedCallback;
- (void)onRoomParticipantDisconnected:(NSString* _Nullable)onRoomParticipantDisconnectedCallback;
@end

@interface Open_im_sdk_callbackOnUserListener : NSObject <goSeqRefInterface, Open_im_sdk_callbackOnUserListener> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onSelfInfoUpdated:(NSString* _Nullable)userInfo;
- (void)onUserCommandAdd:(NSString* _Nullable)userCommand;
- (void)onUserCommandDelete:(NSString* _Nullable)userCommand;
- (void)onUserCommandUpdate:(NSString* _Nullable)userCommand;
- (void)onUserStatusChanged:(NSString* _Nullable)userOnlineStatus;
@end

@interface Open_im_sdk_callbackSendMsgCallBack : NSObject <goSeqRefInterface, Open_im_sdk_callbackSendMsgCallBack> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onError:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onProgress:(long)progress;
- (void)onSuccess:(NSString* _Nullable)data;
@end

@interface Open_im_sdk_callbackUploadFileCallback : NSObject <goSeqRefInterface, Open_im_sdk_callbackUploadFileCallback> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * Complete The file upload is complete, providing the final size, URL, and type of the file
 */
- (void)complete:(int64_t)size url:(NSString* _Nullable)url typ:(long)typ;
/**
 * HashPartComplete All parts have been hashed, providing the combined hash of all parts and the final file hash
 */
- (void)hashPartComplete:(NSString* _Nullable)partsHash fileHash:(NSString* _Nullable)fileHash;
/**
 * HashPartProgress Progress of hashing each part, including the part index, size, and hash value
 */
- (void)hashPartProgress:(long)index size:(int64_t)size partHash:(NSString* _Nullable)partHash;
/**
 * Open a file with a given size
 */
- (void)open:(int64_t)size;
/**
 * PartSize Set the size of each part and the total number of parts
 */
- (void)partSize:(int64_t)partSize num:(long)num;
/**
 * UploadComplete The entire file upload progress, including the file size, stream size, and storage size
 */
- (void)uploadComplete:(int64_t)fileSize streamSize:(int64_t)streamSize storageSize:(int64_t)storageSize;
/**
 * UploadID Upload ID is generated and provided
 */
- (void)uploadID:(NSString* _Nullable)uploadID;
/**
 * UploadPartComplete A specific part has completed uploading, providing the part index, size, and hash value
 */
- (void)uploadPartComplete:(long)index partSize:(int64_t)partSize partHash:(NSString* _Nullable)partHash;
@end

@interface Open_im_sdk_callbackUploadLogProgress : NSObject <goSeqRefInterface, Open_im_sdk_callbackUploadLogProgress> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onProgress:(int64_t)current size:(int64_t)size;
@end

#endif
