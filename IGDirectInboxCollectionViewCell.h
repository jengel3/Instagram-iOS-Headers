
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, IGDirectThreadAvatarView, UILabel, IGImageView, CALayer;

@interface IGDirectInboxCollectionViewCell : UICollectionViewCell {

	UIImageView* _indicatorView;
	IGDirectThreadAvatarView* _avatarView;
	UILabel* _label;
	IGImageView* _mediaThumbnailView;
	CALayer* _separatorLayer;

}

@property (nonatomic,readonly) UIImageView * indicatorView;                        //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,readonly) IGDirectThreadAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) IGImageView * mediaThumbnailView;                   //@synthesize mediaThumbnailView=_mediaThumbnailView - In the implementation block
@property (nonatomic,readonly) CALayer * separatorLayer;                           //@synthesize separatorLayer=_separatorLayer - In the implementation block
-(void)configureWithViewModel:(id)arg1 ;
-(void)setupIndicatorView;
-(void)setupAvatarView;
-(void)setupLabel;
-(void)setupMediaThumbnailView;
-(void)setupSeparatorLayer;
-(IGImageView *)mediaThumbnailView;
-(CALayer *)separatorLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(IGDirectThreadAvatarView *)avatarView;
-(void)setupSubviews;
-(UIImageView *)indicatorView;
@end

