
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView;

@interface IGAlbumTabBarEntryCell : UITableViewCell {

	UIView* _ig_imageView;

}

@property (nonatomic,retain) UIView * ig_imageView;              //@synthesize ig_imageView=_ig_imageView - In the implementation block
+(CGSize)defaultImageSize;
+(id)reuseIdentifier;
-(UIView *)ig_imageView;
-(void)setIg_imageView:(UIView *)arg1 ;
-(void)configureWithItem:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

