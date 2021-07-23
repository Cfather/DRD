function res = initialize_array(input_type,sizes)
    switch input_type
        case 'sym'
            res = sym(zeros(sizes));
        case 'number'
            res = zeros(sizes);
        case 'intval'
            res = intval(zeros(sizes));
        case 'interval'
            res = interval(zeros(sizes));
        otherwise
            error('Unrecoginized variable type')
    end
end

