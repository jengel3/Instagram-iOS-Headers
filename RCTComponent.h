
@class NSNumber;


@protocol RCTComponent <NSObject>
@property (nonatomic,copy) NSNumber * reactTag; 
@optional
-(void)reactBridgeDidFinishTransaction;
-(void)didUpdateReactSubviews;
-(void)didSetProps:(id)arg1;

@required
-(NSNumber *)reactTag;
-(id)reactSuperview;
-(id)reactTagAtPoint:(CGPoint)arg1;
-(char)isReactRootView;
-(id)reactSubviews;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
-(void)removeReactSubview:(id)arg1;
-(void)setReactTag:(id)arg1;

@end

