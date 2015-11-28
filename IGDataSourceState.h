

@class NSArray;

@interface IGDataSourceState : NSObject {

	NSArray* _sections;

}

@property (nonatomic,readonly) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
-(id)objectsInSection:(unsigned)arg1 ;
-(id)objectsAtIndexPaths:(id)arg1 ;
-(id)initWithSections:(id)arg1 ;
-(unsigned)numberOfObjectsInSection:(unsigned)arg1 ;
-(void)enumerateObjectsAtIndexPaths:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateObjectsInSection:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)numberOfSections;
-(NSArray *)sections;
@end

