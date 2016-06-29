
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface IGAlbumCollaborationSectionHeader : UICollectionReusableView {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

