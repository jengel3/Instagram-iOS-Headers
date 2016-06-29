

@class IGDirectThread;

@interface IGDirectThreadDataTransformer : NSObject {

	IGDirectThread* _thread;

}

@property (nonatomic,retain) IGDirectThread * thread;              //@synthesize thread=_thread - In the implementation block
-(id)allContent;
-(id)mostRecentActivityDate;
-(id)lastSeenAt;
-(id)allContentsWithUploads:(id)arg1 ;
-(id)lastSeenAtForUserPK:(id)arg1 ;
-(id)allVisibleContent;
-(id)lastVisibleContent;
-(id)copyForcingLastSeenToDate:(id)arg1 currentUserPK:(id)arg2 ;
-(id)initWithThread:(id)arg1 ;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
@end

