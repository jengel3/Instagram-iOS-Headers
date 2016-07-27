
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIImage, UIColor;

@interface IGSwitchUsersBaseCell : UITableViewCell {

	NSString* _text;
	UIImageView* _cellImageView;
	UILabel* _cellLabel;
	UIImage* _image;

}

@property (nonatomic,retain) UIImageView * cellImageView;              //@synthesize cellImageView=_cellImageView - In the implementation block
@property (nonatomic,retain) UILabel * cellLabel;                      //@synthesize cellLabel=_cellLabel - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
-(CGRect)imageViewFrame;
-(UIImageView *)cellImageView;
-(UILabel *)cellLabel;
-(CGRect)labelFrameForLabel:(id)arg1 ;
-(CGSize)labelSizeForLabel:(id)arg1 cellWidth:(float)arg2 ;
-(id)initWithImage:(id)arg1 text:(id)arg2 reuseIdentifier:(id)arg3 ;
-(void)setCellImageView:(UIImageView *)arg1 ;
-(void)setCellLabel:(UILabel *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(UIColor *)textColor;
@end

