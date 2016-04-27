
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@class IGCoreTextView, NSString;

@interface IGDirectPlaceholderCell : IGDirectContentCell <IGCoreTextLinkHandler> {

	IGCoreTextView* _titleView;
	IGCoreTextView* _messageTextView;

}

@property (nonatomic,retain) IGCoreTextView * titleView;                    //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * messageTextView;              //@synthesize messageTextView=_messageTextView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageStyle;
+(float)heightForPlaceholderWithMessage:(id)arg1 andTitle:(id)arg2 ;
+(id)titleStyle;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(CGRect)tapTargetFrame;
-(IGCoreTextView *)messageTextView;
-(void)setMessageTextView:(IGCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGCoreTextView *)titleView;
-(void)setTitleView:(IGCoreTextView *)arg1 ;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
@end

