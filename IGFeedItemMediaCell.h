
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGHeartAnimatable.h>

@class IGPost, UINavigationController, NSString;

@interface IGFeedItemMediaCell : UICollectionViewCell <IGHeartAnimatable> {

	IGPost* _post;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) IGPost * post;                                                     //@synthesize post=_post - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellIdentifier;
-(void)setPost:(IGPost *)arg1 ;
-(IGPost *)post;
-(id)contentViewForHeartAnimation;
-(void)layoutSubviews;
-(id)accessibilityIdentifier;
-(void)prepareForReuse;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

