/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class CKEntity, CKIMMessage, CKMessageComposition, IMChat, IMMessage, IMService, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

//@interface CKConversation : NSObject
//{
//    NSTimer *_recalculateDowngradeStateTimer;
//    int _downgradeState;
//    BOOL _ignoreDowngradeStatusUpdates;
//    NSArray *_recipients;
//    NSString *_name;
//    NSMutableDictionary *_groupMessages;
//    NSMutableArray *_messages;
//    NSMutableArray *_pendingMessages;
//    BOOL _isStale;
//    int _bulkMessageAddStack;
//    BOOL _updatesDisabled;
//    BOOL _needsPostAfterUpdate;
//    BOOL _wantsAnimatedPost;
//    BOOL _ignoringTypingUpdates;
//    id <CKMessage> _placeholderMessage;
//    BOOL _hasPlaceholder;
//    BOOL _moreMessagesToLoad;
//    int _limitToLoad;
//    IMChat *_chat;
//    BOOL _blockingForHistoryQuery;
//    IMMessage *_incomingTypingMessage;
//    IMMessage *_outgoingTypingMessage;
//    IMService *_cachedPreferredService;
//    int _cachedPreferredServiceError;
//    NSArray *_pendingRecipients;
//    NSArray *_pendingHandles;
//    NSArray *_failedMessages;
//}
@interface CKConversation (IOS6)
+ (void)_postNotification:(id)arg1 forMessage:(id)arg2;
+ (BOOL)_contentChangedFromOldMessage:(id)arg1 toNewMessage:(id)arg2;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (unsigned int)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1;
+ (id)_iMessage_localizedErrorForReason:(int)arg1;
+ (BOOL)_iMessage_canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id *)arg3;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(int *)arg2;
+ (int)_iMessage_maxAttachmentCount;
+ (BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_iMessage_canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (id)_sms_localizedErrorForReason:(int)arg1;
+ (BOOL)_sms_canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id *)arg3;
+ (BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(int *)arg2;
+ (int)_sms_maxAttachmentCount;
+ (BOOL)_sms_canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_mediaObjectPassesRestriction:(id)arg1;
@property(readonly, nonatomic) NSArray *failedMessages; // @synthesize failedMessages=_failedMessages;
@property(nonatomic, getter=isIgnoringTypingUpdates) BOOL ignoringTypingUpdates; // @synthesize ignoringTypingUpdates=_ignoringTypingUpdates;
@property(nonatomic) int limitToLoad; // @synthesize limitToLoad=_limitToLoad;
@property(readonly, nonatomic) BOOL isStale; // @synthesize isStale=_isStale;
@property(retain, nonatomic) IMMessage *outgoingTypingMessage; // @synthesize outgoingTypingMessage=_outgoingTypingMessage;
@property(retain, nonatomic) IMMessage *incomingTypingMessage; // @synthesize incomingTypingMessage=_incomingTypingMessage;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSArray *pendingHandles; // @synthesize pendingHandles=_pendingHandles;
@property(copy, nonatomic) NSArray *pendingRecipients; // @synthesize pendingRecipients=_pendingRecipients;
@property(readonly, nonatomic) NSArray *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2;
- (id)__copyEntities;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_headerTitleForService:(id)arg1;
- (id)_nameForHandle:(id)arg1;
@property(readonly, nonatomic) NSString *serviceDisplayName;
- (int)outgoingBubbleColor;
@property(readonly, nonatomic) int buttonColor;
@property(readonly, nonatomic) NSString *previewText;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) int disclosureAtomStyle; // @dynamic disclosureAtomStyle;
@property(readonly, nonatomic) BOOL shouldShowCharacterCount;
- (void)_clearTypingIndicatorsIfNecessary;
- (void)_updateTypingIndicatorForComposition:(id)arg1;
- (void)__rescindTypingIndicatorIfNecessary;
- (void)__sendTypingIndicatorIfNecessary;
- (void)clearTypingIndicator;
@property(readonly, nonatomic) CKIMMessage *outgoingTypingCKMessage;
@property(readonly, nonatomic) CKIMMessage *incomingTypingCKMessage;
- (BOOL)_chatSupportsTypingIndicators;
- (void)sendMessage:(id)arg1 newComposition:(BOOL)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3;
- (void)_recordRecentContact;
- (void)_targetChatToPreferredService:(id)arg1 newComposition:(BOOL)arg2;
- (void)_targetChat:(id)arg1 toService:(id)arg2 newComposition:(BOOL)arg3;
- (BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)newMessageContentChangedWithComposition:(id)arg1;
- (id)newMessageWithComposition:(id)arg1 addToConversation:(BOOL)arg2;
- (id)newMessageWithComposition:(id)arg1 guid:(id)arg2 addToConversation:(BOOL)arg3;
- (id)newMessageWithComposition:(id)arg1;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (BOOL)canSendMessageComposition:(id)arg1 error:(id *)arg2;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id *)arg3;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 onService:(id)arg3 error:(id *)arg4;
- (BOOL)canSendMessageWithMediaObjectTypes:(int *)arg1;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (BOOL)restrictMediaObjects;
@property(readonly, nonatomic, getter=isPending) BOOL pending;
@property(readonly, nonatomic) NSArray *recipientStrings;
@property(readonly, nonatomic) NSArray *pendingEntities; // @dynamic pendingEntities;
- (id)__copyEntityForMFComposeRecipient:(id)arg1;
- (id)copyEntityForAddressString:(id)arg1;
- (int)compareBySequenceNumberAndDateDescending:(id)arg1;
- (void)downgradeStateDidChange;
- (void)invalidatePreferredServiceCache;
- (id)shortDescription;
- (id)description;
- (void)addPlaceholderMessageIfNeededWithDate:(id)arg1;
- (BOOL)isPlaceholder;
- (void)markAllMessagesAsRead;
- (BOOL)isFromFilteredSender;
- (id)latestIncomingMessage;
- (id)latestMessage;
- (void)addMessage:(id)arg1;
- (id)placeholderMessage;
- (void)_setPlaceholderMessage:(id)arg1;
- (void)setMoreMessagesToLoad:(BOOL)arg1;
- (BOOL)moreMessagesToLoad;
- (void)loadMoreMessages;
- (void)loadAllMessages;
- (void)setLoadedMessages:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)deleteAllMessages;
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1;
- (void)removeAllMessages;
- (void)updateMessage:(id)arg1;
- (void)removeMessage:(id)arg1;
- (void)removeMessage:(id)arg1 postUpdate:(BOOL)arg2;
- (id)date;
@property(readonly, nonatomic) unsigned int recipientCount;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) int identifier; // @dynamic identifier;
@property(readonly, nonatomic) int propertyType; // @dynamic propertyType;
@property(readonly, nonatomic) void *abRecord; // @dynamic abRecord;
- (id)uniqueIdentifier;
@property(readonly, nonatomic) NSString *groupID; // @dynamic groupID;
@property(nonatomic) BOOL updatesDisabled; // @dynamic updatesDisabled;
- (void)setUpdatesDisabled:(BOOL)arg1 quietly:(BOOL)arg2;
- (void)postChangedUpdate:(BOOL)arg1;
- (void)_postChangeUpdate:(BOOL)arg1;
- (void)_refreshMoreToLoadFlag;
- (void)_calculateDowngradeState;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1;
- (void)_calculateDowngradeStateTimerFired;
- (void)_updateDowngradeState:(int)arg1 checkAgainInterval:(double)arg2;
- (void)_invalidateDowngradeState;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (BOOL)_handleIsForThisConversation:(id)arg1;
- (void)requestRecipientStatuses;
@property(readonly, nonatomic) IMService *preferredService;
- (id)preferredServiceWithCanSend:(char *)arg1 error:(int *)arg2;
- (BOOL)canSendWithError:(int *)arg1;
- (id)_preferredServiceCheckWithServer:(BOOL)arg1 canSend:(char *)arg2 error:(int *)arg3;
- (BOOL)isDowngraded;
- (void)_setupPreferredServiceChangeHandlers;
- (void)markAsStale;
- (BOOL)reloadIfStale;
- (int)endBulkMessageAddForcePost:(BOOL)arg1;
- (void)beginBulkMessageAdd;
- (void)_endBatchUpdates;
- (void)_beginBatchUpdates;
@property(retain, nonatomic) NSString *rememberedKeyboard;
@property(retain, nonatomic) CKMessageComposition *unsentComposition; // @dynamic unsentComposition;
- (void)_handleChatPropertiesChangedNotification:(id)arg1;
- (void)_handleItemsDidChangeNotification:(id)arg1;
- (BOOL)_handleRemovedMessage:(id)arg1;
- (BOOL)_handleChangedMessage:(id)arg1 forQuery:(id)arg2;
- (BOOL)_handleTypingIndicationMessage:(id)arg1;
- (id)_messagesFromChat:(id)arg1;
- (id)_addCKMessageFromIMMessage:(id)arg1;
- (id)_existingMadridMessageForIMMessage:(id)arg1;
- (id)_IMMessageWithMessageParts:(id)arg1 subject:(id)arg2 date:(id)arg3 isFinished:(BOOL)arg4 messageGUID:(id)arg5 needsDataDetection:(BOOL)arg6;
- (id)_CKMessageFromIMMessage:(id)arg1;
@property(readonly, nonatomic) CKEntity *recipient; // @dynamic recipient;
@property(readonly, nonatomic) NSArray *handles; // @dynamic handles;
@property(readonly, nonatomic) BOOL hasUnreadiMessages; // @dynamic hasUnreadiMessages;
@property(readonly, nonatomic) BOOL hasUnreadMessages; // @dynamic hasUnreadMessages;
@property(readonly, nonatomic) unsigned int unreadCount; // @dynamic unreadCount;
- (void)resetCaches;
- (void)resetPendingMessages;
- (void)dealloc;
- (void)_cleanupMessages;
- (id)initWithChat:(id)arg1 updatesDisabled:(BOOL)arg2;
- (id)init;
- (BOOL)_iMessage_canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (BOOL)_sms_canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1;

@end
