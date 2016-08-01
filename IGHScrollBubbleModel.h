
#import <Instagram/IGDKDiffable.h>

@class NSString;

@interface IGHScrollBubbleModel : NSObject <IGDKDiffable> {

	NSString* _text;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
-(id)diffIdentifier;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithText:(id)arg1 ;
@end

