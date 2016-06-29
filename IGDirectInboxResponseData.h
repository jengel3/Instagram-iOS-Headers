

@class NSString, IGDirectInboxPendingRequests, NSDate, IGGenericMegaphone;

@interface IGDirectInboxResponseData : NSObject {

	NSString* _oldestCursor;
	IGDirectInboxPendingRequests* _pendingRequests;
	int _unseenShareCount;
	NSDate* _unseenShareTimeStamp;
	IGGenericMegaphone* _megaphone;

}

@property (nonatomic,copy,readonly) NSString * oldestCursor;                                //@synthesize oldestCursor=_oldestCursor - In the implementation block
@property (nonatomic,readonly) IGDirectInboxPendingRequests * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) int unseenShareCount;                                        //@synthesize unseenShareCount=_unseenShareCount - In the implementation block
@property (nonatomic,readonly) NSDate * unseenShareTimeStamp;                               //@synthesize unseenShareTimeStamp=_unseenShareTimeStamp - In the implementation block
@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                              //@synthesize megaphone=_megaphone - In the implementation block
-(NSString *)oldestCursor;
-(int)unseenShareCount;
-(NSDate *)unseenShareTimeStamp;
-(IGGenericMegaphone *)megaphone;
-(id)initWithOldestCursor:(id)arg1 pendingRequests:(id)arg2 unseenShareCount:(int)arg3 unseenShareTimeStamp:(id)arg4 megaphone:(id)arg5 ;
-(id)description;
-(IGDirectInboxPendingRequests *)pendingRequests;
@end

