
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGCoreTextView;

@interface IGPublicThreadCommentView : UIView {

	int _textType;
	IGCoreTextView* _commentTextView;

}

@property (nonatomic,retain) IGCoreTextView * commentTextView;              //@synthesize commentTextView=_commentTextView - In the implementation block
@property (assign,nonatomic) int textType;                                  //@synthesize textType=_textType - In the implementation block
+(float)topPadding:(int)arg1 ;
+(id)emojiCommentStyle;
+(id)commentStyle;
+(float)bottomPadding:(int)arg1 ;
+(float)heightForCommentText:(id)arg1 forWidth:(float)arg2 ;
-(void)setLinkHandler:(id)arg1 ;
-(IGCoreTextView *)commentTextView;
-(id)createCommentTextView;
-(void)setCommentTextView:(IGCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)textType;
-(void)setTextType:(int)arg1 ;
-(void)setContent:(id)arg1 ;
@end

