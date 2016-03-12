
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface IGDirectResponseOverlayViewV2XOutContentView : UIView {

	char _hasProcessedTruncation;
	UILabel* _topTextLabel;
	UILabel* _bottomTextLabel;
	UIImageView* _iconImageView;

}

@property (nonatomic,readonly) UILabel * topTextLabel;                   //@synthesize topTextLabel=_topTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bottomTextLabel;                //@synthesize bottomTextLabel=_bottomTextLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (assign,nonatomic) char hasProcessedTruncation;                //@synthesize hasProcessedTruncation=_hasProcessedTruncation - In the implementation block
-(id)initWithTextLayout:(int)arg1 directResponseInfo:(id)arg2 ;
-(void)setupWithTextLayout:(int)arg1 directResponseInfo:(id)arg2 ;
-(UILabel *)bottomTextLabel;
-(UILabel *)topTextLabel;
-(char)hasProcessedTruncation;
-(void)setHasProcessedTruncation:(char)arg1 ;
-(UIImageView *)iconImageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

