

#import <Instagram/Instagram-Structs.h>
@class NSAttributedString;

@interface IGCoreTextContext : NSObject {

	NSAttributedString* _attributedString;
	CTFrameRef _frame;
	CGSize _frameSize;
	CGRect _textFrame;

}

@property (nonatomic,readonly) CGSize frameSize;              //@synthesize frameSize=_frameSize - In the implementation block
@property (nonatomic,readonly) CGRect textFrame;              //@synthesize textFrame=_textFrame - In the implementation block
-(id)initWithAttributedString:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(void)dealloc;
-(CTFrameRef)frame;
-(id)description;
-(CGSize)frameSize;
-(CGRect)textFrame;
@end

