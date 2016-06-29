
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGFeedPhotoPromptView;

@interface IGFindFriendsPromptCell : UICollectionViewCell {

	IGFeedPhotoPromptView* _promptView;

}

@property (nonatomic,readonly) IGFeedPhotoPromptView * promptView;              //@synthesize promptView=_promptView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGFeedPhotoPromptView *)promptView;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
@end

