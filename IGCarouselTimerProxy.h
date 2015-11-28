

@class IGExploreCarouselsView;

@interface IGCarouselTimerProxy : NSObject {

	IGExploreCarouselsView* _carouselsView;

}

@property (assign,nonatomic,__weak) IGExploreCarouselsView * carouselsView;              //@synthesize carouselsView=_carouselsView - In the implementation block
-(IGExploreCarouselsView *)carouselsView;
-(void)setCarouselsView:(IGExploreCarouselsView *)arg1 ;
-(void)didFireCarouselCascadeTimer:(id)arg1 ;
@end

