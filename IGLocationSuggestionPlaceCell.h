
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGLocation, UILabel, UIImageView;

@interface IGLocationSuggestionPlaceCell : UICollectionViewCell {

	IGLocation* _location;
	UILabel* _textLabel;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UILabel * textLabel;                  //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IGLocation * location;                //@synthesize location=_location - In the implementation block
+(id)cellFont;
-(void)setLocationTitle:(id)arg1 ;
-(id)cellBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)textLabel;
-(UIImageView *)imageView;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

