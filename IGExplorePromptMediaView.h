
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGThumbnailsGridViewDelegate.h>

@protocol IGExplorePromptMediaViewDelegate;
@class IGThumbnailsGridView, UILabel, UIButton, NSString;

@interface IGExplorePromptMediaView : UIView <IGThumbnailsGridViewDelegate> {

	id<IGExplorePromptMediaViewDelegate> _delegate;
	IGThumbnailsGridView* _gridView;
	UILabel* _textLabel;
	UIButton* _closeButton;

}

@property (nonatomic,retain) IGThumbnailsGridView * gridView;                                   //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                               //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                            //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGExplorePromptMediaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapOnClose;
-(void)didTapOnView;
-(void)setImageURLs:(id)arg1 ;
-(void)didTapThumbnailAtIndex:(unsigned)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGExplorePromptMediaViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGExplorePromptMediaViewDelegate>)delegate;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setGridView:(IGThumbnailsGridView *)arg1 ;
-(IGThumbnailsGridView *)gridView;
-(void)setupSubviews;
-(UIButton *)closeButton;
@end

