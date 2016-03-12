
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class CALayer, IGExploreVideoDummyPostView;

@interface IGExploreVideoDummyPostCell : UICollectionViewCell {

	CALayer* _touchDownLayer;
	IGExploreVideoDummyPostView* _iconsView;

}

@property (nonatomic,retain) CALayer * touchDownLayer;                             //@synthesize touchDownLayer=_touchDownLayer - In the implementation block
@property (nonatomic,retain) IGExploreVideoDummyPostView * iconsView;              //@synthesize iconsView=_iconsView - In the implementation block
-(void)configureCellWithPost:(id)arg1 ;
-(CALayer *)touchDownLayer;
-(void)setTouchDownLayer:(CALayer *)arg1 ;
-(IGExploreVideoDummyPostView *)iconsView;
-(void)setIconsView:(IGExploreVideoDummyPostView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
@end

