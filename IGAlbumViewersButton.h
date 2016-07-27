
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class NSArray, UIImageView, IGFacepileView, UILabel;

@interface IGAlbumViewersButton : UIButton {

	NSArray* _facepileUsers;
	int _viewerCount;
	UIImageView* _eyeImageView;
	IGFacepileView* _facepile;
	UILabel* _label;

}

@property (nonatomic,readonly) UIImageView * eyeImageView;              //@synthesize eyeImageView=_eyeImageView - In the implementation block
@property (nonatomic,readonly) IGFacepileView * facepile;               //@synthesize facepile=_facepile - In the implementation block
@property (nonatomic,readonly) UILabel * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * facepileUsers;                   //@synthesize facepileUsers=_facepileUsers - In the implementation block
@property (assign,nonatomic) int viewerCount;                           //@synthesize viewerCount=_viewerCount - In the implementation block
-(UIImageView *)eyeImageView;
-(int)viewerCount;
-(void)setViewerCount:(int)arg1 ;
-(void)setFacepileUsers:(NSArray *)arg1 ;
-(IGFacepileView *)facepile;
-(NSArray *)facepileUsers;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)label;
-(void)updateLabelText;
@end

