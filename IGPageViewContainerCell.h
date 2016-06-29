
#import <UIKit/UICollectionViewCell.h>

@class UIViewController;

@interface IGPageViewContainerCell : UICollectionViewCell {

	UIViewController* _controller;

}

@property (nonatomic,readonly) UIViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)setController:(id)arg1 parentViewController:(id)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIViewController *)controller;
@end

