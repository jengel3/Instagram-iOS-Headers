

@protocol IGSlidingCollectionViewCell <NSObject>
@property (assign,nonatomic) float slideAmount; 
@property (nonatomic,readonly) float maxSlideAmount; 
@required
-(void)setSlideAmount:(float)arg1;
-(float)maxSlideAmount;
-(float)slideAmount;

@end

