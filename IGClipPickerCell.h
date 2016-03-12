
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, CAGradientLayer, UILabel;

@interface IGClipPickerCell : UICollectionViewCell {

	UIImageView* _clipImageView;
	CAGradientLayer* _gradientLayer;
	UILabel* _clipDurationLabel;

}

@property (nonatomic,retain) UIImageView * clipImageView;                  //@synthesize clipImageView=_clipImageView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) UILabel * clipDurationLabel;                  //@synthesize clipDurationLabel=_clipDurationLabel - In the implementation block
-(id)LX_snapshotView;
-(void)setClipImage:(id)arg1 ;
-(void)setClipDurationText:(id)arg1 ;
-(UIImageView *)clipImageView;
-(void)setClipImageView:(UIImageView *)arg1 ;
-(UILabel *)clipDurationLabel;
-(void)setClipDurationLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CAGradientLayer *)gradientLayer;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
@end

