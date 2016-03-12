

#import <Instagram/Instagram-Structs.h>
@class NSArray, NSString;

@interface IGEstimatingFeedLayoutSectionAttributes : NSObject {

	char _headerIsPinned;
	int _section;
	NSArray* _itemAttributes;
	NSString* _headerKind;
	CGSize _headerSize;
	CGRect _frame;

}

@property (nonatomic,readonly) CGSize headerSize;                     //@synthesize headerSize=_headerSize - In the implementation block
@property (nonatomic,readonly) char headerIsPinned;                   //@synthesize headerIsPinned=_headerIsPinned - In the implementation block
@property (nonatomic,readonly) int section;                           //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) CGRect frame;                          //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGPoint sectionOrigin; 
@property (nonatomic,readonly) NSArray * itemAttributes;              //@synthesize itemAttributes=_itemAttributes - In the implementation block
@property (nonatomic,readonly) NSString * headerKind;                 //@synthesize headerKind=_headerKind - In the implementation block
-(NSArray *)itemAttributes;
-(NSString *)headerKind;
-(id)initWithSection:(int)arg1 inCollectionView:(id)arg2 sectionOrigin:(CGPoint)arg3 headerIsPinned:(char)arg4 ;
-(void)setSectionOrigin:(CGPoint)arg1 ;
-(id)layoutAttributesForHeaderOffset:(CGPoint)arg1 ;
-(id)layoutAttributesForHeaderWithOffset:(CGPoint)arg1 ;
-(id)delegateForCollectionView:(id)arg1 ;
-(CGSize)calculateLayoutAttributesForSection:(int)arg1 inCollectionView:(id)arg2 origin:(CGPoint)arg3 ;
-(CGPoint)sectionOrigin;
-(char)headerIsPinned;
-(CGRect)frameForItemAtIndexPath:(id)arg1 origin:(CGPoint)arg2 collectionView:(id)arg3 ;
-(void)reloadCellAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)moveCellsInSectionBy:(CGSize)arg1 ;
-(CGSize)headerSize;
-(CGRect)frame;
-(id)description;
-(int)section;
@end

