
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGAlbumCommentContentViewDelegate;
@class IGCommentModel, IGCoreTextView, UIImageView, UIActivityIndicatorView, NSString;

@interface IGAlbumCommentContentView : UIView <IGCoreTextLinkHandler> {

	id<IGAlbumCommentContentViewDelegate> _delegate;
	IGCommentModel* _comment;
	IGCoreTextView* _coreTextView;
	UIImageView* _statusView;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UIImageView * statusView;                                           //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                        //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCommentContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCommentModel * comment;                                           //@synthesize comment=_comment - In the implementation block
@property (nonatomic,retain) IGCoreTextView * coreTextView;                                      //@synthesize coreTextView=_coreTextView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styledStringForComment:(id)arg1 width:(float)arg2 ;
+(float)heightForComment:(id)arg1 width:(float)arg2 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(IGCoreTextView *)coreTextView;
-(void)setCoreTextView:(IGCoreTextView *)arg1 ;
-(void)setComment:(IGCommentModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumCommentContentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGAlbumCommentContentViewDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIImageView *)statusView;
-(void)setStatusView:(UIImageView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)updateStatus;
-(IGCommentModel *)comment;
@end

