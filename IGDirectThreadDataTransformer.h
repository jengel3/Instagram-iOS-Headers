

@class IGDirectThread;

@interface IGDirectThreadDataTransformer : NSObject {

	IGDirectThread* _thread;

}

@property (nonatomic,retain) IGDirectThread * thread;              //@synthesize thread=_thread - In the implementation block
-(id)mostRecentActivityDate;
-(id)lastSeenAt;
-(id)lastSeenAtForUserPK:(id)arg1 ;
-(id)allVisibleContent;
-(id)lastVisibleContent;
-(id)allContentsWithUploads:(id)arg1 ;
-(char)isUnread;
-(id)initWithThread:(id)arg1 ;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
@end

