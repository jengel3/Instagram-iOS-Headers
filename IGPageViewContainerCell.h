
#import <UIKit/UICollectionViewCell.h>

@class UIViewController;

@interface IGPageViewContainerCell : UICollectionViewCell {

	UIViewController* _controller;

}

@property (nonatomic,retain) UIViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)prepareForReuse;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
@end

