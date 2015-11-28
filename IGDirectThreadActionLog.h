
#import <Instagram/IGDirectContent.h>

@class NSString, NSArray;

@interface IGDirectThreadActionLog : IGDirectContent {

	NSString* _title;
	NSArray* _boldInfo;

}

@property (nonatomic,copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * boldInfo;              //@synthesize boldInfo=_boldInfo - In the implementation block
-(NSArray *)boldInfo;
-(void)setBoldInfo:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(id)digestDescription;
@end

