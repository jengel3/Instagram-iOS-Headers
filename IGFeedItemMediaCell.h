
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGHeartAnimatable.h>

@class IGFeedItem, UINavigationController, NSString;

@interface IGFeedItemMediaCell : UICollectionViewCell <IGHeartAnimatable> {

	IGFeedItem* _post;
	UINavigationController* _navigationController;

}

@property (nonatomic,readonly) IGFeedItem * post;                                               //@synthesize post=_post - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellIdentifier;
-(IGFeedItem *)post;
-(id)contentViewForHeartAnimation;
-(void)layoutSubviews;
-(id)accessibilityIdentifier;
-(void)prepareForReuse;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

