
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, IGCoreTextView;

@interface IGGroupedTableViewFooterView : UIView {

	UILabel* _textLabel;
	NSString* _annotatedText;
	float _height;
	IGCoreTextView* _coreTextView;

}

@property (nonatomic,retain) IGCoreTextView * coreTextView;              //@synthesize coreTextView=_coreTextView - In the implementation block
@property (nonatomic,retain) NSString * annotatedText;                   //@synthesize annotatedText=_annotatedText - In the implementation block
@property (nonatomic,readonly) float height;                             //@synthesize height=_height - In the implementation block
+(float)heightWithText:(id)arg1 ;
-(IGCoreTextView *)coreTextView;
-(void)setCoreTextView:(IGCoreTextView *)arg1 ;
-(void)setAnnotatedText:(NSString *)arg1 ;
-(float)heightWithAnnotatedText;
-(NSString *)annotatedText;
-(void)configureTextLabelWithText:(id)arg1 ;
-(void)doLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)height;
-(id)initWithText:(id)arg1 ;
@end

