

@interface IGFeedItemPageCellState : NSObject {

	char _expandedCaption;
	char _videoAudioEnabled;
	int _currentItemIndex;
	int _previousItemIndex;

}

@property (assign,nonatomic) int currentItemIndex;                //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (assign,nonatomic) int previousItemIndex;               //@synthesize previousItemIndex=_previousItemIndex - In the implementation block
@property (assign,nonatomic) char expandedCaption;                //@synthesize expandedCaption=_expandedCaption - In the implementation block
@property (assign,nonatomic) char videoAudioEnabled;              //@synthesize videoAudioEnabled=_videoAudioEnabled - In the implementation block
-(int)currentItemIndex;
-(void)setVideoAudioEnabled:(char)arg1 ;
-(char)videoAudioEnabled;
-(void)setCurrentItemIndex:(int)arg1 ;
-(int)previousItemIndex;
-(void)setPreviousItemIndex:(int)arg1 ;
-(char)expandedCaption;
-(void)setExpandedCaption:(char)arg1 ;
@end

