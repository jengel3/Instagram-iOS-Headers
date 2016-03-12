
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, IGLocation, UIImageView, UILabel;

@interface IGLocationSuggestionPlaceCell : UICollectionViewCell {

	NSString* _locationTitle;
	IGLocation* _location;
	UIImageView* _imageView;
	UILabel* _textLabel;

}

@property (nonatomic,retain) NSString * locationTitle;              //@synthesize locationTitle=_locationTitle - In the implementation block
@property (nonatomic,retain) IGLocation * location;                 //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                   //@synthesize textLabel=_textLabel - In the implementation block
+(id)cellFont;
-(void)setLocationTitle:(NSString *)arg1 ;
-(NSString *)locationTitle;
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

