
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IGSectionInfo : NSObject <NSCopying> {

	NSString* _title;
	id _sectionType;
	NSArray* _rowsInfoArray;

}

@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) id sectionType;                       //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,retain) NSArray * rowsInfoArray;              //@synthesize rowsInfoArray=_rowsInfoArray - In the implementation block
-(void)setRowsInfoArray:(NSArray *)arg1 ;
-(NSArray *)rowsInfoArray;
-(id)sectionType;
-(void)setSectionType:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

