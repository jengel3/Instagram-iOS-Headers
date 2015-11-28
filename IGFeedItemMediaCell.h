
#import <UIKit/UICollectionViewCell.h>

@class IGPost, UINavigationController;

@interface IGFeedItemMediaCell : UICollectionViewCell {

	IGPost* _post;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) IGPost * post;                                                     //@synthesize post=_post - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
+(id)cellIdentifier;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(id)accessibilityIdentifier;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

