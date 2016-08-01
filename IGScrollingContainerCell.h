
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIScrollView, UIViewController;

@interface IGScrollingContainerCell : UICollectionViewCell {

	UIScrollView* _containerScrollView;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) UIScrollView * containerScrollView;              //@synthesize containerScrollView=_containerScrollView - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;               //@synthesize viewController=_viewController - In the implementation block
+(id)reuseIdentifier;
-(void)configureWithViewController:(id)arg1 parentViewController:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIViewController *)viewController;
-(UIScrollView *)containerScrollView;
@end

