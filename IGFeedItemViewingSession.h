

@interface IGFeedItemViewingSession : NSObject {

	char _hasSeenMediaTopLeftPoint;
	char _hasSeenMediaBottomRightPoint;

}

@property (assign,nonatomic) char hasSeenMediaTopLeftPoint;                  //@synthesize hasSeenMediaTopLeftPoint=_hasSeenMediaTopLeftPoint - In the implementation block
@property (assign,nonatomic) char hasSeenMediaBottomRightPoint;              //@synthesize hasSeenMediaBottomRightPoint=_hasSeenMediaBottomRightPoint - In the implementation block
-(char)hasSeenMediaTopLeftPoint;
-(void)setHasSeenMediaTopLeftPoint:(char)arg1 ;
-(char)hasSeenMediaBottomRightPoint;
-(void)setHasSeenMediaBottomRightPoint:(char)arg1 ;
@end

