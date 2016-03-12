
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class Tool, UILabel, UIImageView, UIColor, UIFont;

@interface ToolCell : UICollectionViewCell {

	char _isSelected;
	char _isDisabled;
	Tool* _tool;
	float _titleOffsetY;
	UILabel* _titleLabel;
	UIImageView* _thumbnailView;

}

@property (nonatomic,retain) Tool * tool;                              //@synthesize tool=_tool - In the implementation block
@property (assign,nonatomic) char isSelected;                          //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) char isDisabled;                          //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,retain) UIColor * titleLabelColor; 
@property (nonatomic,retain) UIFont * titleLabelFont; 
@property (assign,nonatomic) float thumbnailSize; 
@property (assign,nonatomic) float titleOffsetY;                       //@synthesize titleOffsetY=_titleOffsetY - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
-(Tool *)tool;
-(void)setTitleLabelFont:(UIFont *)arg1 ;
-(void)setTool:(Tool *)arg1 ;
-(void)setTitleLabelColor:(UIColor *)arg1 ;
-(void)setTitleOffsetY:(float)arg1 ;
-(float)titleOffsetY;
-(void)setThumbnailSize:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(char)isSelected;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailView;
-(UIFont *)titleLabelFont;
-(UIColor *)titleLabelColor;
-(float)thumbnailSize;
-(void)setIsSelected:(char)arg1 ;
-(void)setIsDisabled:(char)arg1 ;
-(char)isDisabled;
@end

