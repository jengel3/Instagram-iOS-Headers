

@class IGDirectThread;

@interface IGDirectThreadDataTransformer : NSObject {

	IGDirectThread* _thread;

}

@property (nonatomic,retain) IGDirectThread * thread;              //@synthesize thread=_thread - In the implementation block
-(id)allVisibleContent;
-(id)lastVisibleContent;
-(id)allContentsWithUploads:(id)arg1 ;
-(id)initWithThread:(id)arg1 ;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
@end

