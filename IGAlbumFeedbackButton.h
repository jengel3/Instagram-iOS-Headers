
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class NSArray, UIImageView, IGFacepileView, UILabel;

@interface IGAlbumFeedbackButton : UIButton {

	NSArray* _facepileUsers;
	int _commentCount;
	int _viewerCount;
	UIImageView* _arrowImageView;
	IGFacepileView* _facepile;
	UILabel* _label;

}

@property (nonatomic,readonly) UIImageView * arrowImageView;              //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (nonatomic,readonly) IGFacepileView * facepile;                 //@synthesize facepile=_facepile - In the implementation block
@property (nonatomic,readonly) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * facepileUsers;                     //@synthesize facepileUsers=_facepileUsers - In the implementation block
@property (assign,nonatomic) int commentCount;                            //@synthesize commentCount=_commentCount - In the implementation block
@property (assign,nonatomic) int viewerCount;                             //@synthesize viewerCount=_viewerCount - In the implementation block
-(IGFacepileView *)facepile;
-(int)viewerCount;
-(void)setFacepileUsers:(NSArray *)arg1 ;
-(void)setViewerCount:(int)arg1 ;
-(NSArray *)facepileUsers;
-(int)commentCount;
-(void)setCommentCount:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)label;
-(void)updateLabelText;
-(UIImageView *)arrowImageView;
@end

