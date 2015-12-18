
#import <UIKit/UICollectionViewCell.h>

@class IGPost, UINavigationController, IGHeartView;

@interface IGFeedItemMediaCell : UICollectionViewCell {

	IGPost* _post;
	UINavigationController* _navigationController;
	IGHeartView* _heartView;

}

@property (nonatomic,retain) IGPost * post;                                                     //@synthesize post=_post - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) IGHeartView * heartView;                                    //@synthesize heartView=_heartView - In the implementation block
+(id)cellIdentifier;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(IGHeartView *)heartView;
-(void)animateLikeCompletion:(/*^block*/id)arg1 ;
-(void)setHeartView:(IGHeartView *)arg1 ;
-(void)animateLike;
-(void)layoutSubviews;
-(id)accessibilityIdentifier;
-(void)prepareForReuse;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

