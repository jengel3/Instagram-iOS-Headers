

@class IGExploreJumbotronView;

@interface IGMarqueeTimerProxy : NSObject {

	IGExploreJumbotronView* _jumbotronView;

}

@property (assign,nonatomic,__weak) IGExploreJumbotronView * jumbotronView;              //@synthesize jumbotronView=_jumbotronView - In the implementation block
-(IGExploreJumbotronView *)jumbotronView;
-(void)setJumbotronView:(IGExploreJumbotronView *)arg1 ;
-(void)didFireMarqueeTimer:(id)arg1 ;
@end

