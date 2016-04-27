
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, NSString, UILabel, UIImage, UIColor;

@interface IGSwitchUsersBaseCell : UITableViewCell {

	UIImageView* _cellImageView;
	NSString* _text;
	UILabel* _cellLabel;
	UIImage* _image;

}

@property (nonatomic,retain) UIImageView * cellImageView;              //@synthesize cellImageView=_cellImageView - In the implementation block
@property (nonatomic,retain) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UILabel * cellLabel;                      //@synthesize cellLabel=_cellLabel - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
-(UILabel *)cellLabel;
-(CGRect)imageViewFrame;
-(CGRect)labelFrameForLabel:(id)arg1 ;
-(CGSize)labelSizeForLabel:(id)arg1 cellWidth:(float)arg2 ;
-(void)setCellImageView:(UIImageView *)arg1 ;
-(void)setCellLabel:(UILabel *)arg1 ;
-(id)initWithImage:(id)arg1 text:(id)arg2 reuseIdentifier:(id)arg3 ;
-(UIImageView *)cellImageView;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(UIColor *)textColor;
@end

