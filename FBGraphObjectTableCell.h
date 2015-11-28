
#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIActivityIndicatorView, NSString, UIImage;

@interface FBGraphObjectTableCell : UITableViewCell {

	char _boldTitle;
	char _boldTitleSuffix;
	UIImageView* _pictureView;
	UILabel* _titleSuffixLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * titleSuffix; 
@property (assign,nonatomic) char boldTitle;                                           //@synthesize boldTitle=_boldTitle - In the implementation block
@property (assign,nonatomic) char boldTitleSuffix;                                     //@synthesize boldTitleSuffix=_boldTitleSuffix - In the implementation block
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) UIImage * picture; 
@property (nonatomic,retain) UIImageView * pictureView;                                //@synthesize pictureView=_pictureView - In the implementation block
@property (nonatomic,retain) UILabel * titleSuffixLabel;                               //@synthesize titleSuffixLabel=_titleSuffixLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
+(float)rowHeight;
-(UIImageView *)pictureView;
-(void)setPictureView:(UIImageView *)arg1 ;
-(NSString *)titleSuffix;
-(UILabel *)titleSuffixLabel;
-(char)boldTitle;
-(char)boldTitleSuffix;
-(void)setTitleSuffixLabel:(UILabel *)arg1 ;
-(void)createTitleSuffixLabel;
-(void)startAnimatingActivityIndicator;
-(void)stopAnimatingActivityIndicator;
-(void)setTitleSuffix:(NSString *)arg1 ;
-(void)setBoldTitle:(char)arg1 ;
-(void)setBoldTitleSuffix:(char)arg1 ;
-(void)setPicture:(UIImage *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIImage *)picture;
-(void)updateFonts;
@end

