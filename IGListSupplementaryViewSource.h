

@protocol IGListSupplementaryViewSource <NSObject>
@required
-(CGSize*)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2;
-(CGSize*)estimatedSizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2;
-(id)supplementaryViewKindClasses;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(int)arg2;

@end

